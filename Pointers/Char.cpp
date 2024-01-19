#include <iostream>
using namespace std;
int main()
{

    char name[7] = "Aritra";

    cout << name << endl;
    cout << *name << endl;

    char *ch = &name[0];
    cout << *ch << endl;
    cout << ch << endl;

    return 0;
}