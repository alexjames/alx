/***

The king has a string composed of lowercase English letters. Help him figure out if any anagram of the string can be a palindrome or not.

Input Format
A single line which contains the input string

Constraints
1<=length of string <= 10^5
Each character of the string is a lowercase English letter.

Output Format
A single line which contains YES or NO in uppercase.

***/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, size, j, Map[26];
    int yes = 1, firstodd = 0;
    char str[100001];

    scanf("%s", str);
    size = strlen(str);

    for (i = 0; i < 26; i++)
    {
        Map[i] = 0;
    }

    for (i = 0; i < size; i++)
    {
        j = str[i] - 'a';
        Map[j] = Map[j] + 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (Map[i] % 2 != 0)
        {
            firstodd++;
            if (firstodd > 1)
            {
                yes = 0;
                break;
            }
        }
    }

    if (yes == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

