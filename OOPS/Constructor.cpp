#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string password;

public:
    string name;
    string department;
    int roll;
    int age;

    // Constructor
    Student(string n, string d, int r, int a, string p)
    {
        name = n;
        department = d;
        roll = r;
        age = a;
        password = p;
    }
};
int main()
{
    Student AA12("Aritra", "ECE", 81, 21, "password123");

    cout << "Name: " << AA12.name << endl;
    cout << "Department: " << AA12.department << endl;
    cout << "Roll: " << AA12.roll << endl;
    cout << "Age: " << AA12.age << endl;
    return 0;
}