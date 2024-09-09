#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    //   Properties
    string name;
    string dept;
    string subject;

    // Methods
    void changeSubject(string sub)
    {
        subject = sub;
    }
};

int main()
{
    Teacher X;
    X.name = "John Doe";
    X.dept = "Computer Science";
    X.subject = "Data Structures";
    // X.salary=50000;  Can't set the salaray because it is private

    cout << "Name: " << X.name << endl;
    cout << "Department: " << X.dept << endl;
    cout << "Subject: " << X.subject << endl;
    // cout << "Salary: " << X.salary << endl;  Can't print the salary because it is private

    X.changeSubject("Operating System");

    cout << "Subject: " << X.subject << endl;

    return 0;
}