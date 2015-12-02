#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x, v, fin = 0;
    int A[4] = {0, 0, 0, 0};
    cin >> x;
    for (int i = 0; i < x; ++i)
    {
        cin >> v;
        A[v - 1] = A[v - 1] + 1;
    }

    if (A[3] > 0)
    {
        fin = A[3];
    }

    if (A[2] > 0)
    {
        int mn = min(A[2], A[0]);
        fin += mn;
        A[2] = A[2] - mn;
        A[0] = A[0] - mn;
        fin += A[2];
    }

    if (A[1] > 0)
    {
        int twos = A[1] / 2;
        fin += twos;
        if (A[1] % 2 == 1)
        {
            if (A[0] <= 2)
            {
                fin++;
                A[1] = 0;
                A[0] = 0;
            }
            else
            {
                fin++;
                A[1] = 0;
                A[0] = A[0] - 2;
            }
        }
    }

    if (A[0] > 0)
    {
        int q = A[0] / 4;
        fin += q;
        if (A[0] % 4 > 0)
        {
            fin++;
        }
    }
    cout << fin << endl;

    return 0;
}
