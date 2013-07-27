#include <iostream>
using namespace std;

// A neat way to solve this problem. Not using vectors here. This is a 1-D array
// of (const char *) pointers.

int main(void)
{
    const char *list[] = {"few", "several", "pack", "lots",     \
                          "horde", "throng", "swarm", "zounds", \
                          "legion"};
    int i, choice;
    cin >> choice;

    if (choice <= 4) i = 0;
    else if (choice <= 9) i = 1;
    else if (choice <= 19) i = 2;
    else if (choice <= 49) i = 3;
    else if (choice <= 99) i = 4;
    else if (choice <= 249) i = 5;
    else if (choice <= 499) i = 6;
    else if (choice <= 999) i = 7;
    else i = 8;

    cout << list[i] << endl;

    return 0;
}
