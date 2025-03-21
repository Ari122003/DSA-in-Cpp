#include <bits/stdc++.h>
using namespace std;

float taylor(int x, int n)
{
    static int p = 1;
    static int f = 1;

    if (n == 0)
    {
        return 1;
    }

    float res = taylor(x, n - 1);
    p = p * x;
    f = f * n;

    return res + (float)p / f;
}
int main()
{
    cout << taylor(2, 5);
    return 0;
}