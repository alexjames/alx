#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    int x;
    int i, j, factor;
    int min = 0;
    int C[102];
    cin >> N;
    cin >> K;

    for (i = 0; i < N; i++)
    {
        cin >> C[i];
    }

    // Sort the numbers
    sort(C, C + N);

    x = N / K;

    for (i = 1; i <= K; i++)
    {
        x = N - i;
        factor = 1;
        for (j = x; j >= 0;j -= K)
        {
            min += factor * C[j];
            factor++;
        }
    }

    cout << min << endl;

    return 0;
}

