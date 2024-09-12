#include <bits/stdc++.h>
using namespace std;

class Teacher
{

private:
    int salary;

public:
    string name;

    void setSalary(int sal)
    {
        salary = sal;
    }

    int getSalary()
    {
        return salary;
    }
};
int main()
{
    Teacher x;
    x.name = "John Doe";
    x.setSalary(5000);

    cout << "Teacher's Name: " << x.name << endl;
    cout << "Teacher's Salary: " << x.getSalary() << endl;
    return 0;
}