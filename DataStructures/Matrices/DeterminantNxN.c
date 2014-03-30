#include<stdio.h>
#include<stdlib.h>

/* Computes the minor */
/* Uses an array for simplicity of function design */
/* Returns a pointer to newly allocated array of order n */
int* matminor(int A[], int j, int n)
{
    int k, l, y, x = -1;
    int size = n * n;
    int limit = (n + 1) * (n + 1);
    int *ptr = malloc(size * sizeof(int));
    for (k = 0, l = 0; k < limit; k++)
    {
        y = k % (n + 1);
        if (y == 0)
        x++;
        if (x == 0 || y == j)
            continue;
        ptr[l] = A[k];
        l++;
    }
    return ptr;
}

int DET(int A[], int order)
{
	if (order == 2)
	{
		return (A[0] * A[3] - A[2] * A[1]);
	}

    int k, sum, factor, det;
    factor = -1;
    sum = 0;
    for (k = 0; k < order; k++)
    {
        factor = factor * -1;
        int *min = matminor(A, k, order - 1);
        det = DET(min, order - 1);
        free (min);
        sum = sum + (factor * A[k]* det);
    }
    return sum;
}

int main()
{
    int A[] = {1, 2, 4, 5, 1, 0, 0, 2, 3, 4, 2, 7, -1, -4, 0, 5};
    printf("%d",DET(A, 4));
    return 0;
}
