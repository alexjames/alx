#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, t;
    string str;
    x = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> str;
        if ((str.compare("++X") == 0) ||
             str.compare("X++") == 0)
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
