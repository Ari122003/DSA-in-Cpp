#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    if (size == 1)
    {
        return arr[0];
    }

    return arr[0] + sum(arr + 1, size - 1);
}

int main()
{
    int arr[9] = {1, 2, 3, 6};

    cout << sum(arr, 4);
    return 0;
}