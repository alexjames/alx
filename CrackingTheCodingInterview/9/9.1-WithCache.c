#include <stdio.h>
#include <string.h>

int Cache[100];

int stepcount(int n)
{
    int count = 0;

    if (Cache[n] != 0)
    {
        return Cache[n];
    }

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

    Cache[n] = count;
    return count;
}

int main(void)
{
    memset(Cache, 0, 100);
    printf("%d\n", stepcount(50));
    return 0;
}
