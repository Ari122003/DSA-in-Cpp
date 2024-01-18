#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int *p = &a;
    cout << p << endl;
    cout << *p << endl;
    cout << ++*p << endl;

    int b = a;

    return 0;
}