#include <iostream>
using namespace std;

void func(int n)
{
    if (n < 1)
    {
        return;
    }

    func(n - 1);

    cout << n << " ";
}

void func2(int count, int n)
{
    if (count > n)
    {
        return;
    }

    func2(count + 1, n);

    cout << count << " ";
}

int main()
{
    // func(20);
    func2(1, 20);
    return 0;
}