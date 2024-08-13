#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> vrr)
{
    for (int i = 0; i < vrr.size(); i++)
    {
        cout << " " << vrr[i];
    }
}
int main()
{

    vector<int> v;

    cout << "Size " << v.size() << endl;
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(4);

    cout << "Size " << v.size() << endl;
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(6);

    cout << "Size " << v.size() << endl;
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(8);

    cout << "Size " << v.size() << endl;
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(10);

    cout << "Size " << v.size() << endl;
    cout << "Capacity " << v.capacity() << endl;
    v.push_back(12);

    cout << "Size " << v.size() << endl;
    cout << "Capacity " << v.capacity() << endl;

    // cout << "Front: " << v.front() << endl;
    // cout << "Back: " << v.back() << endl;

    v[2] = 100;

    print(v);

    return 0;
}