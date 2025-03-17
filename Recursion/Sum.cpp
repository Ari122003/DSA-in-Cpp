
#include <bits/stdc++.h>
using namespace std;

int sum1(int n)
{
    if (n > 0)
    {
        return sum1(n - 1) + n;
    }

    return 0;
}

int sum2(int n)
{
    if (n == 0)
        return 0;

    return sum2(n - 1) + n;
}
int main()
{
    cout << sum1(50) << endl;
    cout << sum2(50);
    return 0;
}