#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void print()
    {
        cout << "Parent class function" << endl;
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << "Child class function" << endl;
    }
};

int main()
{
    Parent p;
    Child c;
    c.print();
    p.print();
    return 0;
}