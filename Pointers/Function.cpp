#include <iostream>
using namespace std;

void change(int *p)
{
    // p = p + 1;
    *p = *p + 1;
}

void update(int *arr)
{
    arr[2] = 100;
}

int main()

{
    int a = 7;
    int *p = &a;

    cout << "Before:" << *p << endl;
    change(p);
    cout << "After:" << *p << endl;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Before:" << arr[2] << endl;
    update(arr);
    cout << "After:" << arr[2] << endl;

    return 0;
}