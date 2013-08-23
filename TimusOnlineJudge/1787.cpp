#include <iostream>
using namespace std;

int main()
{

    int k,n, leftover = 0, input;
    cin >> k >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if ((leftover + input) > k)
        {
            leftover = leftover + input - k;
        }
        else
        {
            leftover = 0;
        }
    }

    cout << leftover;

    return 0;
}
