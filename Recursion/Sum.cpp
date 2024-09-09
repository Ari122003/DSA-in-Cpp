#include <iostream>
using namespace std;

int sum = 0;

void func(int n)
{

    if (n < 1)
    {
        return;
    }

    sum += n;

    func(n - 1);
}

void param(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }

    param(i - 1, sum + i);
}

int back(int n)
{
    if (n < 1)
    {
        return n;
    }

    int sum = n + back(n - 1);

    return sum;
}

int main()
{
    // func(20);
    // cout << sum;

    // param(10, 0);

    cout << back(10);
    return 0;
}