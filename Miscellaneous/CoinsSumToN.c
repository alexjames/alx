/***
Topcoder problem
Given a list of N coins, their values (V1, V2, ... , VN), and the total sum S.
Find the minimum number of coins the sum of which is S (we can use as many coins
of one type as we want), or report that it's not possible to select coins in 
such a way that they sum up to S. 
***/
#define MAX_NUM 100000
#define INF 999999
#include<iostream>
using namespace std;

int main()
{
    int Min[MAX_NUM], V[MAX_NUM];
    int i, j, num_values, S;
    cin >> num_values;
    for (i = 0; i < num_values; i++)
    {
        cin >> V[i];
    }
    cin >> S;

    for (i = 1; i <= S; i++)
    {
        Min[i] = INF;
    }

    for (i = 1; i <= S; i++)
    {
        for (j = 0; j < num_values; j++)
        {
            if (i >= V[j] && (Min[i - V[j]] + 1 < Min[i]))
            {
                Min[i] = Min[i - V[j]] + 1;
            }
        }
    }

    cout << Min[S] << endl;

    return 0;
}
