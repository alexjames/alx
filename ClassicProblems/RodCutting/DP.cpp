#include <iostream>
#define NMAX 200
using namespace std;

int DP(int P[], int pn, int L)
{
    int N[NMAX];
    int i, j;

    for (i = 1; i <= L; i++)
    {
        N[i] = -1;
    }
    N[0] = 0;

    for (i = 1; i <= L; i++)
    {
        for (j = 1; j <= pn; j++)
        {
            if (i - j >= 0)
            {
                int cost = P[j] + N[i - j]; 
                if (cost > N[i])
                {
                    N[i] = cost;
                }
            }
        }
    }

    return N[L];
}

int main(void)
{
    int P[NMAX], pn, L;
    cin >> L;
    cin >> pn;
    for (int i = 1; i <= pn; i++)
    {
        cin >> P[i];
    }
    cout << DP(P, pn, L) << endl;
    return 0;
}
