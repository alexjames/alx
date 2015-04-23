#include<stdio.h>

#define CountOf(x) sizeof(x)/sizeof(x[0])

int findmin(int A[], int low, int high)
{
    if (high < low)
        return -1;

    if (high == low)
        return high;

    int mid = (high + low) / 2;

    if (A[mid] < A[high])
    {
        findmin(A, low, mid - 1);
    }
    else
    {
        findmin(A, mid + 1, high);
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
    printf("\nMin: %d\n\n", A[findmin(A, 0, size)]);
}

int main()
{
    int A[] = {1,2,3,4,5,6,7};
    test(A, CountOf(A));
    int B[] = {8,9,1,2,3,4,5,6,7};
    test(B, CountOf(B));
    int C[] = {2,3,4,5,6,7,8,1};
    test(C, CountOf(C));
    return 0;
}
