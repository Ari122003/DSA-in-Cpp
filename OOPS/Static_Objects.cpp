#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    A(string name)
    {
        cout << "Constructor of " << name << " called" << endl;
    }

    ~A()
    {
        cout << "Destroyed" << endl;
    }
};
int main()
{
    if (true)
    {
        static A obj1("obj1");
    }
    cout << "End of main function" << endl;
    return 0;
}