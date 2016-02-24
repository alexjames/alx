#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;

void insert(node *&n, int val)
{
    if (n == NULL)
    {
        n = new node;
        n->data = val;
        n->left = n->right = NULL;
    }
    else
    {
        if (val > n->data)
        {
            insert(n->right, val);
        }
        else
        {
            insert(n->left, val);
        }
    }
}

void inorder(node *n)
{
    if (n == NULL)
        return;
    else
    {
        inorder(n->left);
        cout << n->data << " ";
        inorder(n->right);
    }
}

int main()
{
    node *p = NULL;
    insert(p, 6);
    insert(p, 7);
    insert(p, 8);
    insert(p, 2);
    inorder(p);
    return 0;
}
