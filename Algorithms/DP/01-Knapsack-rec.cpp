#include <iostream>  // std::cout, std::cin
#include <algorithm> // std::max

using namespace std;

int Knapsack(int V[], int W[], int cap, int i)
{
    if (cap == 0 || i < 0)
        return 0;

    // skip over items whose weights exceed our current capacity
    if (W[i] > cap)
        return Knapsack(V, W, cap, i - 1);
    else
    {
        // Either include item i or don't include it
        return max( V[i] + Knapsack(V, W, cap - W[i], i - 1),
                    Knapsack(V, W, cap, i - 1) );
    }
}

int main()
{
    int V[] = {10, 20, 30};
    int W[] = {1, 2, 3};
    int Cap;
    cin >> Cap;
    int max = Knapsack(V, W, Cap, 2);
    cout << max <<endl;
    return 0;
}
