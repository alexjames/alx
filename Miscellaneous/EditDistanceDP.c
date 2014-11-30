#include <stdio.h>
#include <string.h>

int min(int a, int b, int c)
{
    if (a <= b && a <=c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else 
        return c;
}

int isequal(char a, char b)
{
    if (a == b)
        return 0;
    else
        return 1;
}

int main(void)
{

    char source[100], target[100];
    int DPMatrix[101][101];
    int i, j, k, n, m;

    scanf("%s", source);
    n = strlen(source);

    scanf("%s", target);
    m = strlen(target);

    for (i = 0; i <= n; i++)
    {
        DPMatrix[i][0] = i;
    }

    for (i = 0; i <= m; i++)
    {
        DPMatrix[0][i] = i;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            DPMatrix[i][j] = min( DPMatrix[i - 1][j - 1] + isequal(source[j - 1],
                                                               target[i - 1]),
                                  DPMatrix[i - 1][j] + 1,
                                  DPMatrix[i][j - 1] + 1);
        }
    }

    printf("DP Matrix\n");
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= m; j++)
        {
            printf("%d", DPMatrix[i][j]);
        }
        printf("\n");
    }

    printf("Minimum edit distance is %d\n", DPMatrix[n][m]);

    return 0;
}

