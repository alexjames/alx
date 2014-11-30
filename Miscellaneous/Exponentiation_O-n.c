/***
Naive Exponentiation. 'nuff said.
***/

#include <stdio.h>

int main(void)
{
    int a, n, sum = 1;
    scanf("%d", &a);
    scanf("%d", &n);
    while (n > 0)
    {
        sum = sum * a;
        --n;
    }

    printf("%d\n", sum);
    return 0;
}

