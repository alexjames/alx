#include <stdio.h>

int BigTable[100001];

void poss(int t, int N, int sum, int a, int b)
{
    if (t == N)
    {
        BigTable[sum] = 1;
    }
    else
    {
        poss(t + 1, N, sum + a, a, b);
        poss(t + 1, N, sum + b, a, b);
    }
}

int main(void)
{
    int i, j;
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
        for (j = 0; j < 10000; j++)
        {
            BigTable[j] = 0;
        }

        poss(1, N[i], 0, a[i], b[i]);

        for (j = 0; j < 10000; j++)
        {
            if (BigTable[j] != 0)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

    return 0;
}
