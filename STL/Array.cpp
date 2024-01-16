#include <iostream>
#include <array>
using namespace std;
void print(array<int, 1000> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
}
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    int n;

    // cout << "Enter size:" << endl;
    // cin >> n;
    // cout << "Enter elements" << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    cout << "Size is " << arr.size() << endl;
    cout << arr.at(2) << endl;
    cout << arr.empty() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    return 0;
}