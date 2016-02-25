#include<stdlib.h>
#include<stack>
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;

node* new_node(int val)
{
    node *n = (node *) malloc(sizeof(node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
}

node* create_subtree(int *arr, int pos, int size)
{
    if (arr == NULL)
        return NULL;

    node *tmp = new_node(arr[pos]);

    int child = 2 * pos;

    if (child + 1 < size && arr[child + 1] != -1)
    {
        tmp->left = create_subtree(arr, child + 1, size);
    }

    if (child + 2 < size && arr[child + 2] != -1)
    {
        tmp->right = create_subtree(arr, child + 2, size);
    }

    return tmp;
}

void preorder(node *n)
{
    if (n == NULL)
        return;

    cout << n->data; 
    preorder(n->left);
    preorder(n->right);
}

void inorder(node *n)
{
    if (n == NULL)
        return;

    inorder(n->left);
    cout << n->data << " "; 
    inorder(n->right);
}

void postorder(node *n)
{
    if (n == NULL)
        return;

    postorder(n->left);
    postorder(n->right);
    cout << n->data << " "; 
}

void inorder_nonrec(node *n)
{
    if (n == NULL)
        return;

    std::stack <node *> s;
    node *current = n;
    while (true)
    {
        if (current != NULL && current->left)
        {
            s.push(current);
            current = current->left;
        }
        else
        {
            if (current == NULL)
            {
                if (s.empty())
                {
                    break;
                }
                else
                {
                    current = s.top();
                    s.pop();
                }
            }
            cout << current->data << " ";
            current = current->right;
        }
    }
}


void preorder_nonrec(node *n)
{
    node *p;
    if (n == NULL)
        return;

    std::stack <node *> s;
    s.push(n);

    while (!s.empty())
    {
        p = s.top();
        cout << p->data;
        s.pop();
        if (p->right)
        {
            s.push(p->right);
        }
        if (p->left)
        {
            s.push(p->left);
        }
    }
}

void postorder_nonrec(node *n)
{
    if (n == NULL)
        return;

    std::stack <node *> s1, s2;
    node *p;
    s1.push(n);
    while (!s1.empty())
    {
        p = s1.top();
        s1.pop();
        s2.push(p);

        if (p->left)
        {
            s1.push(p->left);
        }

        if (p->right)
        {
            s1.push(p->right);
        }

    }

    while (!s2.empty())
    {
        p = s2.top();
        cout << p->data << " ";
        s2.pop();
    }
}

void postorder_nonrec2(node *n)
{
    if (n == NULL)
        return;

    std::stack <node *> s;
    node *curr, *prev;
    prev = NULL;
    s.push(n);
    while (!s.empty())
    {
        curr = s.top();
        if (curr->left == NULL && curr->right == NULL)
        {
            cout << curr->data << " ";
            prev = curr;
            s.pop();
        }
        else if (prev && prev == curr->left)
        {
            if (curr->right)
            {
                s.push(curr->right);
            }
            else
            {
                cout << curr->data << " ";
                prev = curr;
                s.pop();
            }
        }
        else if (prev && prev == curr->right)
        {
                cout << curr->data << " ";
                prev = curr;
                s.pop();
        }
        else if (curr->left)
        {
            s.push(curr->left);
        }
        else if (curr->right)
        {
            s.push(curr->right);
        }
    }
}

void tree_serial(int A[], node *n)
{
    static int index = 0;
    
    if (n == NULL)
    {
        A[index++] = -1;
        return;
    }

    A[index++] = n->data;
    if (n->left != NULL && n->right == NULL)
    {
        A[index++] = -1;
    }
    else if (n->left == NULL && n->right != NULL)
    {
        A[index++] = -2;
    }
    else if (n->left != NULL && n->right != NULL)
    {
        A[index++] = -3;
    }
}

node* tree_deserial(int A[])
{
    static int index = 0;
    static bool done = 0;

    if (A[index] == -1)
    {
        done = 1;
        index++;
        return NULL;
    }

    node *n = new_node(A[index++]);

    n->left = tree_deserial(A);
    if (done == 1)
    {
        n->right = NULL;
    }
    else
    {
        n->right = tree_deserial(A);
    }
    done = 0;

    return n;

}

void converttodll(node *n, node **prev, node **head)
{
    if (n == NULL || head == NULL || prev == NULL)
        return;

    converttodll(n->left, prev, head);

    if (*prev == NULL)
    {
        *head = n;
        n->left = *prev;
    }
    else
    {
        (*prev)->right = n;
        n->left = *prev;
        if (n->right == NULL)
        {
            n->right = NULL;
        }
    }
    *prev = n;

    converttodll(n->right, prev, head);
}




int main()
{
    int T1[7] = {1,2,3,4,5,6,7};
    node *t1 = create_subtree(T1, 0, 7);
    int T2[7] = {1,2,3,4,-1,-1,-1};
    node *t2 = create_subtree(T2, 0, 7);
    int T3[7] = {1,2,3,-1,-1,-1,4};
    node *t3 = create_subtree(T3, 0, 7);
    int T4[15] = {1,2,3,4,5,-1,-1,-1,-1,6,-1,-1,-1,-1,-1};
    node *t4 = create_subtree(T4, 0, 15);

    node *p;
    node *prev = NULL;
    converttodll(t1, &prev, &p);

    for (node *x = p; x != NULL; x = x->right)
    {
        cout << x->data << " ";
    }

    return 0;
}
