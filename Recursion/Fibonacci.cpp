#include <iostream>
using namespace std;

int fibonacci(int a)
{

    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }

    cout << a << " ";

    fibonacci(a - 1) + fibonacci(a - 2);
}

int main()
{
    fibonacci(8);
    return 0;
}