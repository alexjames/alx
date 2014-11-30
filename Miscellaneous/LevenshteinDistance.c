/***

Minimum edit distance (Levenshtein Distance)

After an insertion, only i needs to move.
m(oon)
|
i

sw(oon)
 |
 j
--------
--------
(moon)

sw(moon)
 |
 j



After a deletion, only j needs to move.
m(oon)
|
i

sw(oon)
 |
 j
--------
--------
m(oon)
|
i

s(oon)
|
j

***/


#include<stdio.h>
#include<string.h>

int conv(char a, char b)
{
    if (a == b)
        return 0;
    else
        return 1;
}

int ins(char a, char b)
{
    return 1;
}

int del(char a, char b)
{
    return 1;
}

int editcost(char *t, char *p, int i, int j)
{
    if (i < 0 && j >= 0)
        return editcost(t, p, -1, j - 1) + 1; 
 
    if (j < 0 && i >= 0)
        return editcost(t, p, i - 1, -1) + 1;

    if (i < 0 && j < 0)
        return 0;

    int mincost[3] = {0, 0, 0};
    int m, n, lower = 999;

    mincost[0] = editcost(t, p, i - 1, j - 1) + conv(t[i], p[j]);
    mincost[1] = editcost(t, p, i - 1, j) + ins(t[i], p[j]);
    mincost[2] = editcost(t, p, i, j - 1) + del(t[i], p[j]);

    for (m = 0; m < 3; m++)
    {
        if (lower > mincost[m])
        {
            lower = mincost[m];
        }
    }
    return lower;
}

int main(void)
{
    char target[] = "monkey";
    char pattern[] = "aon";
    int n = editcost(target, pattern, strlen(target) - 1, strlen(pattern) - 1);
    printf ("%d\n", n);
    return 0;
}
