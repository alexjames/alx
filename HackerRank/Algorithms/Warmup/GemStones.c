#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j, n, len, count;
    int AUB[26];
    int First[26];
    char str[100];

    for (i = 0; i < 26; i++)
    {
        AUB[i] = 0;
    }

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 26; j++)
        {
            First[j] = 0;
        }
        scanf("%s", str);
        len = strlen(str);
        for (j = 0; j < len; j++)
        {
            if (First[str[j] - 'a'] != 1)
            {
                First[str[j] - 'a'] = 1;
                AUB[str[j] - 'a'] = AUB[str[j] - 'a'] + 1;
            }
        }
    }

    count = 0;
    for (i = 0; i < 26; i++)
    {
        if (AUB[i] == n)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}

