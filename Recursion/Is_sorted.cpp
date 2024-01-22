#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    // Base acse

    if (size == 0 || size == 1)
    {
        return true;
    }

    // Logic

    if (arr[1] < arr[0])
    {
        return false;
    }

    // Recursion

    isSorted(arr + 1, size - 1);
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 5, 6, 8, 7};
    cout << isSorted(arr, 9);
    return 0;
}