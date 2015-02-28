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

struct node *rev(struct node *p, struct node *q)
{
    struct node *nxt = p->next;
    p->next = q;
    if (nxt == NULL)
    {
        return p;
    }
    return rev(nxt, p);
}

void reverse_list(struct node **ll)
{
    if (*ll == NULL)
        return;

    *ll = rev(*ll, NULL);
}

void swaplink(struct node *in)
{
    if (in->next == NULL || in->next->next == NULL)
    {
        return;
    }
    struct node *p = in->next;
    struct node *q = in->next->next;
    struct node *out = q->next;

    in->next = q;
    q->next = p;
    p->next = out;

    swaplink(p);

}


void linkswap(struct node **ll)
{

    if (*ll == NULL || (*ll)->next == NULL)
        return;

    // First handle the first two nodes

    struct node *p = *ll;
    struct node *q = p->next;
    struct node *out = q->next;
    *ll = q;
    q->next = p;
    p->next = out;

    swaplink(p);

}

void iterative_rev(struct node **ll)
{
    struct node *tmp, *p = *ll;
    struct node *q = NULL;
    while (p != NULL)
    {
        tmp = p->next;
        p->next = q;
        q = p;
        p = tmp;
    }
    *ll = q;
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
    insert_at_end(&p, 1);
    insert_at_end(&p, 2);
    iterative_rev(&p);
    traverse_list(p);
    return 0;
}
