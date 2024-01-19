#include <iostream>
using namespace std;
int main()
{

    int a = 5;
    int &x = a;

    x++;

    cout << x << endl;
    cout << a;

    return 0;
}