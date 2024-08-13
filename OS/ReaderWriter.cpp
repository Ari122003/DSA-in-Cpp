#include <iostream>
using namespace std;

void wait(int s)
{
    while (s <= 0)

        s--;
}

void signal(int s)
{
    s++;
}

int mutex = 1;
int wrt = 1;
int readcount = 0;

void writer()
{
    wait(wrt);
    //  READ
    signal(wrt);
}

void reader()
{
    wait(mutex);
    readcount++;
    if (readcount == 1)
    {
        wait(wrt);
    }

    signal(mutex);

    // READ

    wait(mutex);

    readcount--;

    if (readcount == 0)
    {
        signal(wrt);
    }

    signal(mutex);
}

int main()
{
    return 0;
}