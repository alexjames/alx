#include <stdio.h>

int main(void)
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for (i = 31; i >= 0; i--)
    {
        if (((1 << i) & a) ^ ((1 << i) & b))
        {
            printf("%d\n", ((1 << i) | ((1 << i) - 1)));
            return 0;
        }
    }
    printf("0\n");
    return 0;
}

