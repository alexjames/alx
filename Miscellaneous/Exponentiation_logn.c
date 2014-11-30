#include <stdio.h>

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else if (exp % 2 != 0)
    {
        return base * power(base, exp - 1);
    }
    else
    {
        int tmp = power(base, exp / 2);
        return tmp * tmp;
    }
}

int main(void)
{
    int a, n;
    scanf("%d", &a);
    scanf("%d", &n);
    printf("%d\n", power(a, n));
    return 0;
}

