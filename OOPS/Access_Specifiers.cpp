#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    int x = 5;

private:
    int y = 10;

protected:
    int z = 15;
};

class Child1 : public Parent
{
public:
    void print()
    {

        cout << "x: " << x << endl;
        // cout << "y: " << y << endl; //not accessible beacause y is private in base class
        cout << "z: " << z << endl; // z is accessible in in child class because it is protected
    }
};

class Child2 : protected Parent
{
public:
    void print()
    {
        cout << "x: " << x << endl;
        // cout << "y: " << y << endl; // y is not accessible because y is private in base class
        cout << "z: " << z << endl; // z is accessible in in child class because it is protected
    }
};

int main()
{
    // Publicly inherited
    Child1 c1;
    c1.print();
    cout << c1.x << endl;
    // cout<<c1.z<<endl;    z is not accessible outside of calss because it is protected
    // cout<<c1.y<<endl;    y is not accessible outside of calss because it is private

    cout << "Potectedly inherited" << endl;

    // Protectedly inherited
    Child2 c2;
    c2.print();
    // cout << c2.x << endl; x is not accessible outside of calss although it is private in base class but inherited from protectedly
    // cout<<c2.z<<endl;    z is accessible in in child class because it is protected
    // cout<<c2.y<<endl;    y is not accessible outside of calss because it is private

    return 0;
}