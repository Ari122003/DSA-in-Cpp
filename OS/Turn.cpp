#include <iostream>
using namespace std;

void CS()
{
}

int turn = 0;

void process1()
{

    while (true)
    {
        while (turn != 0)

            CS();
        turn = 1;
    }
}

void process2()
{
    while (true)
    {
        while (turn != 1)
            CS();
        turn = 0;
    }
}

int main()
{

    return 0;
}