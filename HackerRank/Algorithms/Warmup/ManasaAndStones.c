#include <stdio.h>

int main(void)
{
    int i, j, m, n, C, tmp, num, prev = -1;
    int T, N[10], a[10], b[10];
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d", &N[i]);
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < T; i++)
    {
        m = a[i];
        n = b[i];
        C = N[i] - 1;
       
        if (m > n)
        {
            tmp = m;
            m = n;
            n = tmp;
        }

        for (j = 0; j <= C; j++)
        {
            num = ((C - j) * m) + (j * n);
            if (num != prev)
            {
                printf("%d ", num);
                prev = num;
            }
        }
        printf("\n");
    }

    return 0;
}
