#include <iostream>
using namespace std;

class stud
{

public:
    int roll;
    string sub;

    stud(int roll, string sub)
    {
        this->roll = roll;
        this->sub = sub;
    }

    // Custom copy

    stud(stud &name)
    {
        this->roll = name.roll + 5;
        this->sub = name.sub;
    }
};

int main()
{
    stud Aritra(81, "Operating system");
    cout << Aritra.roll << " " << Aritra.sub << endl;

    stud Rabi(Aritra);
    cout << Rabi.roll << " " << Rabi.sub << endl;

       return 0;
}