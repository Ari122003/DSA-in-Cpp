#include <iostream>
using namespace std;

int search(int arr[], int key, int start, int end)
{

    int mid = start + (end - start) / 2;
    if (start > end)
    {
        return -1;
    }

    else if (arr[mid] == key)
    {
        return mid;
    }

    else if (key > arr[mid])
    {
        search(arr, key, mid + 1, end);
    }
    else
    {
        search(arr, key, start, mid - 1);
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    cout << search(arr, -6, 0, 4);

    return 0;
}