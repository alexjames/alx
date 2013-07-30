#include <iostream>
using namespace std;

int main()
{
    int lock1, lock2;
    cin >> lock1 >> lock2;

    if ((lock1 % 2) == 0 || (lock2 % 2) == 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
