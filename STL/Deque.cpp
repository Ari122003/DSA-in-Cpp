#include <iostream>
#include <deque>

using namespace std;
void print(deque<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << " " << arr[i];
    }
}
int main()
{

    deque<int> d;

    d.push_back(1);
    print(d);
    cout << endl;

    d.push_back(3);
    print(d);
    cout << endl;

    d.push_back(5);
    print(d);
    cout << endl;

    d.push_front(7);
    print(d);
    cout << endl;

    d.push_front(9);
    print(d);
    cout << endl;

    // d.pop_back();
    // print(d);
    // cout << endl;

    // d.pop_front();
    // print(d);
    // cout << endl;

    d.erase(d.begin(), d.begin() + 2);
    print(d);

    return 0;
}