#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int *rollptr;

    Student(string name, int roll)
    {
        this->name = name;
        rollptr = new int(roll);
    }

    void displayDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << *rollptr << endl;
    }

    // Destructor

    ~Student()
    {
        cout << "Destroyed object" << endl;
        delete rollptr;
    }
};

int main()
{
    Student s1("Aritra", 81);

    s1.displayDetails();
    return 0;
}