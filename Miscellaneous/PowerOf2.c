#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if ((n ^ (n - 1)) > n)
    {
        printf("Power of 2\n");
    }
    else
    {
        printf("Not a power of 2\n");
    }
    return 0;
}
