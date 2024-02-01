#include <iostream>
using namespace std;

class student
{

private:
    string dept = "ECE";

public:
    int age = 21;

    string getdept()
    {
        return dept;
    }

    void setdept(string dep)
    {
        dept = dep;
    }
};

int main()
{
    student Aritra;

    cout << Aritra.age << endl;
    cout << Aritra.getdept() << endl;
    Aritra.setdept("ECE-B");
    cout << Aritra.getdept() << endl;
    return 0;
}