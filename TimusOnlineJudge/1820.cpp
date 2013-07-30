#include <iostream>
using namespace std;

// This one is tricky. This formula was arrived at mostly by trial
// and error. The idea is, if n = 3 and k = 2, you can fry the 
// first and the second (1st minute), then the second and the third
// (2nd minute, second steak one done) and then the first and the 
// third (3rd minute). Hence, you have to take into account overlapping
// to arrive at this solution.

int main()
{
    int n, k;
    cin >> n >> k;
    if (n <= k)
    {
        cout << 2;
    }
    else if ((2 * n) % k == 0)
    {
        cout << (2 * n) / k;
    }
    else
    {
        cout << ((2 * n) / k) + 1;
    }
    return 0;
}
