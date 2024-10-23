#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

class ECE : public Student
{
public:
    string department;

    ECE(string name, int roll, string department)
    {
        this->name = name;
        this->roll = roll;
        this->department = department;
    }
};

int main()
{
    ECE s1("Aritra", 81, "ECE");
    cout << "Name: " << s1.name << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Department: " << s1.department << endl;
    return 0;
}