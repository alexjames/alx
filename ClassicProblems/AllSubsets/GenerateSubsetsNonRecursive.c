#include <stdio.h>
#include <string.h>
#include <math.h>

void subsets(char *s, int n)
{
    float x = pow(2, n);
    int max = (int) x;
    int i, j, k, index;

    for (i = 0; i < max; i++)
    {
        index = 0;
        for (k = i; k > 0; k >>= 1)
        {
            if ((k & 1) == 1)
            {
                printf("%c", s[index]);
            }
            index++;
        }
        printf("\n");
    }
}

int main(void)
{
    char *str = "ABCDEF";
    int n;
    n = strlen(str);
    subsets(str, n);

    return 0;
}
