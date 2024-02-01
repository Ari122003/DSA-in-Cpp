#include <iostream>
using namespace std;

class Eng
{

private:
    int roll;

public:
    string job;

    void set(int r, string j)
    {
        roll = r;
        job = j;
    }

    void print()
    {
        cout << roll << endl;
        cout << job << endl;
    }
};

int main()
{

    Eng *Aritra = new Eng;
    Aritra->set(81, "Developer");
    Aritra->print();

    return 0;
}