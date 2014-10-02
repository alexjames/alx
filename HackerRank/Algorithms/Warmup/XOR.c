#include<stdio.h>

int main(void)
{
    int n, i, N;
    int res = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &N);
        res = res ^ N;
    }
    printf("%d\n", res);
    return 0;
}
