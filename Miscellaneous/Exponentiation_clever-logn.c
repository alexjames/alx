/***

Super clever. Works like magic. And example of top-down recursion approach working bottom-up.

***/

#include <stdio.h>

int main(void)
{
    int a, n, p, sum = 1;
    scanf("%d", &a);
    scanf("%d", &n);

    p = a;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            sum = sum * p;
        }
        p = p * p;
        n = n / 2;
    }

    printf("%d\n", sum);
    return 0;
}

