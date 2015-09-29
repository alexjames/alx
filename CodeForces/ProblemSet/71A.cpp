#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string str1;
    int i, x;
    cin >> x;
    for (i = 0; i < x; i++)
    {
        cin >> str1;
        if (str1.length() <= 10)
        {
            cout << str1 << endl;
        }
        else
        {
            stringstream num;
            int inum = str1.length() - 2;
            num << inum;
            string num_portion = num.str();
            string finstr;
            finstr += str1[0];
            finstr += num_portion;
            finstr += str1[str1.length() - 1];
            cout << finstr << endl;
        }
    }
    return 0;
}
