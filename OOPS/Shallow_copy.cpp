#include <bits/stdc++.h>
using namespace std;

class Shallow
{

public:
    string *namePtr;
    int *rollPtr;

    Shallow(string s, int r)
    {
        namePtr = new string(s);
        rollPtr = new int();
        *(rollPtr) = r;
    }

    void getDetails()
    {
        cout << *namePtr << endl;
        cout << *rollPtr << endl;
    }
};
int main()
{
    Shallow obj1("Aritra", 81);
    obj1.getDetails();

    Shallow obj2(obj1);

    obj2.getDetails();

    *(obj2.namePtr) = "Shoal";
    *(obj2.rollPtr) = 49;
    // // I am changing the name of obj2 but the change reflects for obj1 , this is because of shallow copying
    obj1.getDetails();
    obj2.getDetails();

    return 0;
}