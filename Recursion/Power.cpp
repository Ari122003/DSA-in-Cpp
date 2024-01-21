#include <iostream>
using namespace std;

int power(int x)
{

    // Base case
    if (x == 0)
    {
        return 1;
    }

    int small = power(x - 1);
    int big = 5 * small;

    return big;
}

int main()
{

    int a = 3;

    cout << "Ans:" << power(a);

    return 0;
}