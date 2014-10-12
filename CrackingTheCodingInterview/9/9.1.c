#include <stdio.h>

int stepcount(int n)
{
    int count = 0;

    if (n == 0)
    {
        return 1;
    }

    if (n >= 1)
    {
        count += stepcount(n - 1);
    }

    if (n >= 2)
    {
        count += stepcount(n - 2);
    }

    if (n >= 3)
    {
        count += stepcount(n - 3);
    }

    return count;
}

int main(void)
{

    printf("%d\n", stepcount(34));
    return 0;
}
