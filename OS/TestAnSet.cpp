#include <iostream>
using namespace std;

void CS()
{
}

bool lock = false;

bool TestAndSet(bool &trig)
{

    bool l = trig;
    trig = true;
    return l;
}

int main()
{
    while (true)
    {
        while (TestAndSet(lock))
            CS();
        lock = false;
    }

    return 0;
}