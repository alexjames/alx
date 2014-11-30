/***

Using recursion to generate all permutations of a,b,c as four-letter words.
That's 3 ^ 4 different possibilities.

***/

#include<stdio.h>
#include<assert.h>

void replace(char *str, int pos, char ch)
{
    str[pos] = ch;
}

void loop(char *str, int i)
{
    if (i < 4)
    {
        replace(str, i, 'a');
        loop(str, i + 1);
        replace(str, i, 'b');
        loop(str, i + 1);
        replace(str, i, 'c');
        loop(str, i + 1);
    }
/* This is a subtle difference, but using 'else' ensures non-leaf nodes in
   recursion tree don't reprint values. If the 'printf' was inside the 'if'
   block, you'd ensure every last character is always 'c'.
*/
    else
    {
        printf("%s\n", str, i);
    }   
}

int main()
{
    int i;
    char str[10]={'\0','\0','\0','\0','\0','\0',};
    loop(str, 0);
    printf("%s", str);
    return 0;
}
