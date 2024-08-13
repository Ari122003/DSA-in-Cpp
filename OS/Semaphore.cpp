#include <iostream>
using namespace std;
void CS()
{
}

int s = 1;

void wait()
{
    while (s <= 0)

        s--;
}

void signal()
{
    s++;
}

int main()
{

    while (true)
    {
        wait();
        CS();
        signal();
    }

    return 0;
}