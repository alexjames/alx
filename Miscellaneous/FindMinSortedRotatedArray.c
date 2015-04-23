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
    else if (A[mid] > A[high])
    {
        return findmin(A, mid, high);
    }
    else
    {
        if (A[mid] != A[low])
        {
            return findmin(A, low, mid);
        }
        else
        {
            int ret = findmin(A, low, mid);
            if (ret != A[mid])
            {
                return ret;
            }
            else
            {
                return findmin(A, mid, high);
            }
        }
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
    int A[] = {10,10,1,10,10,10,10};
    test(A, CountOf(A));
    int B[] = {8,9,1,2,3,4,5,6,7};
    test(B, CountOf(B));
    int C[] = {2,3,4,5,6,7,8,1};
    test(C, CountOf(C));
    int D[] = {3,1,2};
    test(D, CountOf(D));
    int E[] = {4,1,4,4,4,4,4,4,4,4};
    test(E, CountOf(E));
    return 0;
}
