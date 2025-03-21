#include <iostream>
using namespace std;

void change(int *p)
{
    // p = p + 1;
    *p = *p + 1;
}

int main()

{
    int a = 7;
    int *p = &a;

    cout << "Before:" << *p << endl;
    change(p);
    cout << "After:" << *p << endl;

    return 0;
}