#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int T, i, j, len, count;
    char str[10000];
    scanf("%d", &T);

    while (T--)
    {
        count = 0;
        scanf("%s", str);
        len = strlen(str);
        j = len - 1;
        for (i = 0; i < len / 2; i++, j--)
        {
            if (abs(str[i] - str[j]) > 0)
            {
                count += abs(str[i] - str[j]);
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

