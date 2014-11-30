#include <stdio.h>

int maxofthree(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int DnC(int A[], int i, int j)
{
    if (j - i < 1)
        return 0;

    int lmax, rmax, min, max, x;

    int mid = (i + j) / 2;
   
    lmax = DnC(A, i, mid); 
    rmax = DnC(A, mid + 1, j); 

    min = A[i];
    for (x = i + 1; x <= mid; x++)
    {
        if (A[x] < min)
        {
            min = A[x];
        }
    }

    max = A[mid + 1];
    for (x = mid + 2; x <= j; x++)
    {
        if (A[x] > max)
        {
            max = A[x];
        }
    }

    return maxofthree(lmax, rmax, max - min);
}

int main(void)
{
    int pmax, i, n, P[100];
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &P[i]);
    }

    pmax = DnC(P, 0, n - 1);
    printf("%d\n", pmax);

    return 0;
}
