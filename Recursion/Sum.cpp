#include <iostream>
using namespace std;

int sum(int a)
{

    if (a == 0)
    {
        return 0;
    }

    return a + sum(a - 1);
}

int main()
{
    cout << sum(7);
    return 0;
}