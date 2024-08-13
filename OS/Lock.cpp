#include <iostream>
using namespace std;
void criticalSection() {}
int main()
{

    bool lock = false;

    while (true)
    {
        while (lock)
            ;

        lock = true;

        criticalSection();

        lock = false;
    }

    return 0;
}