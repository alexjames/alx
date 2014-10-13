#include <stdio.h>

int main(void)
{

    int i, N;
    int low, cut;
    int A[1000];
    
    scanf("%d", &N);
    for (i = 0; i < N; i++ )
    {
        scanf("%d", &A[i]);
    }

    while (1)
    {
        low = 9999;
        cut = 0;

        for (i = 0; i < N; i++)
        {
            if (low > A[i] && A[i] != 0)
            {
                low = A[i];
            }
        }

        if (low == 9999)
        {
            break;
        }

        for (i = 0; i < N; i++)
        {
            if (A[i] != 0)
            {
                A[i] = A[i] - low;
                cut++;
            }
        }
        printf("%d\n", cut);
    }

    return 0;
}
