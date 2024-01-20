#include <iostream>
#include <bitset>
using namespace std;

inline int getmax(int &x, int &y)
{
    return x > y ? x : y;
}

int main()
{

    int a = 10, b = 7;

    int ans = getmax(a, b);

    cout << "Ans:" << ans << endl;

    cout << bitset<4>(a);

    return 0;
}