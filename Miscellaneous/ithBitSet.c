#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    scanf("%d", &i);
    printf("%d\n", (1 & (n >> i)));
    return 0;
}

