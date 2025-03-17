#include <bits/stdc++.h>
using namespace std;

int x = 0;

int func(int n)
{

    if (n > 0)
    {
        // x++;
        // return func(n - 1) + x;
        return func(n - 1) + n;
    }

    return 0;
}

int main()
{
    cout << func(100);
    return 0;
}