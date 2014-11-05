#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

int BinarySearch(int *A, int i, int j, int x)
{
    if (i <= j)
    {
        int mid = (i + j) / 2;

        if (A[mid] == x)
        {
            return 1;
        }
        if (A[mid] > x)
        {
            return BinarySearch(A, i, mid - 1, x);
        }
        if (A[mid] < x)
        {
            return BinarySearch(A, mid + 1, j, x);
        }
    }
    return 0;
}

int main()
{
    int A[MAX];
    int N, x, i;

    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    cin >> x;

    sort (A, A + N);

    if (BinarySearch(A, 0, N - 1, x))
    {
        cout << "Present\n";
    }
    else
    {
        cout << "Absent\n";
    }
    
    return 0;
}
