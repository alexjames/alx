#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* new_node()
{
    struct node *new = malloc(sizeof(struct node));
    new->data = 0;
    new->next = NULL;
    return new;
}

void insert_at_end(struct node **ll, int data)
{
    if (*ll != NULL)
    {
        struct node *p = *ll;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = new_node();
        p->next->data = data;
    }
    else
    {
        *ll = new_node();
        (*ll)->data = data;
    }
}

void traverse_list(struct node *p)
{
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main(void)
{
    struct node *p = NULL;
    insert_at_end(&p, 5);
    insert_at_end(&p, 6);
    insert_at_end(&p, 7);
    traverse_list(p);
    return 0;
}
