#include <iostream>
using namespace std;

void update(int &x)
{
    x++;
}

int main()
{

    int a = 5;

    cout << a << endl;
    update(a);
    cout << a << endl;

    return 0;
}