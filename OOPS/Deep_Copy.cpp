#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string *namePtr;

    Student(string n)
    {
        namePtr = new string(n);
    }

    // to implement deep copy we need to write a custom copy constructor

    Student(Student &obj)
    {
        namePtr = new string(*obj.namePtr);
    }

    void display()
    {
        cout << "Name: " << *namePtr << endl;
    }
};

int main()
{
    Student s1("Aritra");

    s1.display();

    Student s2(s1);

    s2.display();

    *s2.namePtr = "Shoal";

    // Change in S2 not reflecting on S1

    s1.display();
    s2.display();

    return 0;
}