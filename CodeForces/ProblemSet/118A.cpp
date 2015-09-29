#include<iostream>
#include<string>

int main()
{
    std::string str, finstr;
    std::cin >> str;
    for (std::string::iterator it = str.begin(); it != str.end(); ++it)
    {
        if (std::tolower(*it) == 'a' ||
            std::tolower(*it) == 'e' ||
            std::tolower(*it) == 'i' ||
            std::tolower(*it) == 'o' ||
            std::tolower(*it) == 'u' ||
            std::tolower(*it) == 'y' )
        {
            continue;
        }
        finstr += '.';
        finstr += std::tolower(*it);
    }
    std::cout << finstr << std::endl;
    return 0;
}
