#include <stdio.h>
#include <string.h>

void subsets(char *s, int boolarr[], int i, int n)
{
    if (i >= n)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (boolarr[j] == 1)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
        return;
    }

    subsets(s, boolarr, i + 1, n);
    boolarr[i] = 0;
    subsets(s, boolarr, i + 1, n);
    boolarr[i] = 1;
}

int main(void)
{
    char *str = "ABCDEF";
    int BoolArr[10];
    int i, n = strlen(str);

    for (i = 0; i < n; i++)
    {
        BoolArr[i] = 1;
    }

    subsets(str, BoolArr, 0, n);

    return 0;
}
