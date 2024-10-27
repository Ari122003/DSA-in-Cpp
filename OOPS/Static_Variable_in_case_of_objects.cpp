#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    static int x;

    void inc()
    {
        x++;
    }

    void get()
    {
        cout << "Value of x is: " << x << endl;
    }
};

// Initialize

int A::x = 1;

int main()
{
    A obj1;
    obj1.get();
    obj1.inc();
    obj1.get();

    cout << "New object created" << endl;

    A obj2;
    obj1.get();
    obj2.inc();
    obj1.get();
    return 0;
}