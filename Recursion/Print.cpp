#include <iostream>
using namespace std;

void print(int a)
{
    if (a == 11)
    {
        return;
    }

    cout << a << endl;
    print(a + 1);
}

int main()
{
    print(1);
    return 0;
}