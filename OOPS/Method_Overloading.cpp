#include <bits/stdc++.h>
using namespace std;

class Demo
{

public:
    void get(int a)
    {
        cout << "Value is: " << a << endl;
    }

    void get(string n)
    {
        cout << "Name is: " << n << endl;
    }
};

int main()
{
    Demo d;

    d.get("Aritra");
    d.get(10);

    return 0;
}