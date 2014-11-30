#include <stdio.h>

int main(void)
{
    int pmax, lowest, curr, i, n, P[100];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &P[i]);
    }

    lowest = P[0];
    pmax = 0;
    for (i = 1; i < n; i++)
    {
        curr = P[i] - lowest;
        if (curr > pmax)
        {
            pmax = curr;
        }

        if (P[i] < lowest)
        {
            lowest = P[i];
        }
    }

    printf("%d\n", pmax);

    return 0;
}
