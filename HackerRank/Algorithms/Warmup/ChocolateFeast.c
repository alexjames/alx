/***
Little Bob loves chocolates, and goes to a store with $N in his pocket. The price of each chocolate is $C. The store offers a discount: for every M wrappers he gives to the store, he gets one chocolate for free. How many chocolates does Bob get to eat?

Input Format:
The first line contains the number of test cases T(<=1000).
T lines follow, each of which contains three integers N, C and M

Output Format:
Print the total number of chocolates Bob eats.

Constraints:
2≤N≤105
1≤C≤N
2≤M≤N

Sample input

3
10 2 5
12 4 4
6 2 2

Sample Output

6
3
5
***/

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

