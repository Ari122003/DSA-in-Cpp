#include <bits/stdc++.h>
using namespace std;

class Temp
{

public:
    int a;

    Temp(int a)
    {
        this->a = a;
    }

    Temp(Temp &obj)
    {
        a = obj.a + 1;
    }
};
int main()
{
    Temp t1(5);
    cout << t1.a << endl;

    Temp t2(t1);
    cout << t2.a << endl;
    return 0;
}