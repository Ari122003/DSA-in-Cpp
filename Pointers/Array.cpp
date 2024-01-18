#include <iostream>
using namespace std;
int main()
{
    int arr[3] = {1, 3, 5};
    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(&arr[1]) << endl;

    cout << 2 [arr] << endl;
    return 0;
}