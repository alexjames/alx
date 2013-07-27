#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

int main(void)
{
    // we use long long as we need may need to store a number of 18 digits
    unsigned long long a;
    // use a vector as problem definiton mandates storing of input
    std::vector <unsigned long long> v;

    while (std::cin >> a)
    {
        v.push_back(a);
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        // std::fixed and std::precision must be used together to get
        // the same effect as printf("%.4f", sqrt(a)). These are under
        // the 'iomanip' header. We need 'cmath' for sqrt.
        std::cout << std::fixed << std::setprecision(4) <<  sqrt(v[i]) << std::endl;
    }
    return 0;
}
