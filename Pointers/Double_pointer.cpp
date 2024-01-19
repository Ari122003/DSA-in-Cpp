#include <iostream>
using namespace std;
int main()
{

    int a = 8;

    int *p = &a;

    int **q = &p;

    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << *q << endl;
    cout << **q << endl;

    return 0;
}