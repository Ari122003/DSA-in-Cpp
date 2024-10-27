#include <bits/stdc++.h>
using namespace std;

void count()
{
    static int a = 1;

    cout << a << endl;

    a++;
}
int main()
{
    count();
    count();
    count();
    return 0;
}