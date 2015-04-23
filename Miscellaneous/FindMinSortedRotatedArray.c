#include<stdio.h>

#define CountOf(x) sizeof(x)/sizeof(x[0])

int min(int x, int y)
{
    if (x < y)
        return x;
    else 
        return y;
}

int findmin(int A[], int low, int high)
{
    // 1 element left
    if (high == low)
        return A[low];

    // 2 elements left
    if (low + 1 == high)
        return min(A[low], A[high]);

    int mid = (high + low) / 2;

    if (A[mid] < A[high])
    {
        return findmin(A, low, mid);
    }
    else
    {
        return findmin(A, mid, high);
    }
}

void test(int A[], int size)
{
    int i;
    printf("Test Case:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nMin: %d\n\n", findmin(A, 0, size - 1));
}

int main()
{
    int A[] = {1,2,3,4,5,6,7};
    test(A, CountOf(A));
    int B[] = {8,9,1,2,3,4,5,6,7};
    test(B, CountOf(B));
    int C[] = {2,3,4,5,6,7,8,1};
    test(C, CountOf(C));
    int D[] = {3,1,2};
    test(D, CountOf(D));
    return 0;
}
