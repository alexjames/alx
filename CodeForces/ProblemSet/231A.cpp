#include<iostream>
using namespace std;

int main()
{
    int i, x, p, v, t, fin = 0;
    cin >> x;
    for (i = 0; i < x; i++)
    {
        cin >> p;
        cin >> v;
        cin >> t;
        if ((p + v + t) > 1)
        {
            fin ++;
        }
    }
    cout << fin << endl;

    return 0;
}
