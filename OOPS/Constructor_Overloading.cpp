#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;

    Student()
    {
        cout << "Default Constructor Called" << endl;
    }
    Student(string n)
    {
        name = n;
        cout << "Parameterized constructor called" << endl;
    }
};
int main()
{

    // Call of constructor with same name depends on the parameters , it is a type of compile time polimorphism
    // Student s1;

    Student s2("Aritra");

    return 0;
}