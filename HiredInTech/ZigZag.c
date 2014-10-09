/***

A sequence of numbers is called a zig-zag sequence if the differences between 
successive numbers strictly alternate between positive and negative. The first
difference (if one exists) may be either positive or negative. A sequence with
fewer than two elements is trivially a zig-zag sequence. This program checks
if a sequence is zig-zag or not.

***/

#include <stdio.h>

int check(int a, int b)
{
    if ((a - b) < 0)
        return 1;
    else if ((a - b) > 0) 
        return 2;
    else
        return 0;
}

int main(void)
{
    int N[50];
    int n, i, a, b;
    int status, current = -1, is_zigzag = 1;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &N[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        a = N[i];
        b = N[i + 1];
        status = check(a, b);
        if ( status == 0 || ((status == current) && current != -1))
        {
            is_zigzag = 0;
            break;
        }
        current = status;
    }

    if (is_zigzag == 1)
    {
        printf ("Is zigzag\n");
    }
    else
    {
        printf("Not zigzag\n");
    }

    return 0;
}
