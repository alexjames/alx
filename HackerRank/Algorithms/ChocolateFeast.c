#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0, leftover, newcandy; 
        leftover = answer = (n / c);
        while (leftover >= m)
        {
            newcandy = leftover / m;
            answer += newcandy;
            leftover = newcandy + leftover % m;
        }
        /** Write the code to compute the answer here. **/
        
        printf("%d\n",answer);
    }
    return 0;
}

