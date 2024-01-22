#include <iostream>
using namespace std;

bool search(int arr[], int key, int size)
{

    int mid = 0 + ((size - 1) - 0) / 2;
    if (size == 0)
    {
        return false;
    }

    else if (arr[mid] == key)
    {
        return true;
    }

    else if (key > arr[mid])
    {
        search(arr + mid + 1, key, size - mid);
    }
    else
    {
        search(arr, key, size - mid - 1);
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    cout << search(arr, 3, 5);

    return 0;
}