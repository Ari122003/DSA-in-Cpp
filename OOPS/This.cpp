#include <iostream>
using namespace std;

class stud
{
public:
    int roll;

    stud(int roll)
    {
        this->roll = roll;
    }
};

int main()
{
    stud Aritra(81);

    cout << Aritra.roll;

    return 0;
}