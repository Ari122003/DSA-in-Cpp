#include <iostream>
#include <list>
using namespace std;
void print(list<int> arr)
{
    for (int i : arr)
    {
        cout << " " << i;
    }
}
int main()
{

    list<int> l;

    l.push_back(1);
    print(l);
    cout << endl;

    l.push_back(3);
    print(l);
    cout << endl;

    l.push_back(5);
    print(l);
    cout << endl;

    l.push_front(7);
    print(l);
    cout << endl;

    l.push_front(9);
    print(l);
    cout << endl;

    l.pop_back();
    print(l);
    cout << endl;

    l.pop_front();
    print(l);
    cout << endl;

    // cout<<l.at(2)  it is not possible

    return 0;
}