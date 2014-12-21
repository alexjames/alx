#include<iostream>
#define NMAX 200
using namespace std;

int brute(int P[], int N, int rem_len)
{
    int i, max_cost = 0;
    for (i = 0; i < N; i++)
    {
        if (rem_len - (i + 1) >= 0)
        {
            int cost = P[i] + brute(P, N, rem_len - (i + 1));

            if (cost > max_cost)
            {
                max_cost = cost;
            }
        }
    }

    return max_cost;
}

int main()
{
    int P[NMAX];
    int i, n, L;
    cin >> L;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> P[i];
    }

    cout << brute(P, n, L) << endl;

    return 0;
}
