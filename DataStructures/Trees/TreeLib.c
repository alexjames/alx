#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;

node* new_node(int val)
{
    node *new = (node *) malloc(sizeof(node));
    new->data = val;
    new->left = NULL;
    new->right = NULL;
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

    printf("%d ", n->data);
    preorder(n->left);
    preorder(n->right);
}

int main()
{
    int T1[7] = {1,2,3,4,5,6,7};
    node *t1 = create_subtree(T1, 0, 7);
    preorder(t1);
    int T2[7] = {1,2,3,-1,-1,4,5};
    node *t2 = create_subtree(T2, 0, 7);
    preorder(t2);
    return 0;
}
