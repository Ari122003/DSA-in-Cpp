#include <iostream>
using namespace std;

int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }

    return a * fact(a - 1);
}

// 5!= 5 x 4!
// n!=n x (n-1)!

int main()
{

    cout << fact(6);

    return 0;
}