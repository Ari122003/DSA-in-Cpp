#include <iostream>
using namespace std;

void func1(int count, int n)
{
    if (count > n)
    {
        return;
    }

    cout << count << " ";

    func1(count + 1, n);
}

void func2(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";

    func2(n - 1);
}

int main()
{
    // func1(1, 20);
    func2(20);
    return 0;
}