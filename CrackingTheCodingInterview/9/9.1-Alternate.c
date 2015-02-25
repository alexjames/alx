#include <stdio.h>

int countways(int n)
{
    if (n < 0)
        return 0;
    else if (n == 0)
        return 1;
    else
    {
        return countways(n - 1) +
               countways(n - 2) + 
               countways(n - 3); 
    }
}


int main(void)
{
    printf("%d\n", countways(3));
    return 0;
}
