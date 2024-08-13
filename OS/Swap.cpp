#include <iostream>
using namespace std;
void CS()
{
}

bool lock = false;

int main()
{
    while (true)
    {
        bool key = true;

        while (key)
        {
            swap(lock, key);
        }

        CS();

        lock = false;
    }
    return 0;
}