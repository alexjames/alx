#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char *str, int i, int j)
{
    int m, n;
    char tmp;
    for (m = i; m < j; m++)
    {
        for (n = i + 1; n <= j; n++)
        {
            if (str[n] < str[m])
            {
                tmp = str[n];
                str[n] = str[m];
                str[m] = tmp;
            }
        }
    }
}

int main(void)
{

    int T;
    int i, j, k, l, done;
    char* str[100000];
    char tmp;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        str[i] = malloc(101);
        scanf("%s", str[i]);
    }

    for (i = 0; i < T; i++)
    {
        done = 0;
        j = strlen(str[i]);
        if (j > 1)
        {
            for (k = j - 1; k >= 1; k--)
            {
                for (l = k - 1; l >= 0; l--)
                {
                    if (str[i][l] < str[i][k])
                    {
                        tmp = str[i][l];
                        str[i][l] = str[i][k];
                        str[i][k] = tmp;
                        sort(str[i], l + 1, j - 1);
                        done = 1;
                        break;
                    }
                }
                if (done == 1)
                {
                    break;
                }
            }
        }

        if (done == 1)
        {
            printf("%s\n", str[i]);
        }
        else
        {
            printf("no answer\n");
        }
    }

    return 0;
}

