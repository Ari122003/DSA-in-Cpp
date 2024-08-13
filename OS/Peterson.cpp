#include <iostream>
using namespace std;
void CS()
{
}

bool flag[2] = {false, false};
int turn;

void process1()
{
    while (true)
    {
        flag[0] = true;
        turn = 1;

        while (flag[1] && turn == 1)

            CS();

        flag[0] = false;
    }
}

void process2()
{
    flag[1] = true;
    turn = 0;

    while (flag[0] && turn == 0)

        CS();

    flag[1] = false;
}

int main()
{
    return 0;
}