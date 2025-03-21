#include <iostream>
using namespace std;

int search(int arr[], int st, int end, int key)
{
    if (st > end)
    {
        return -1;
    }

    int mid = st + (end - st) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    else if (arr[mid] <= key)
    {
        return search(arr, mid + 1, end, key);
    }

    return search(arr, st, mid - 1, key);
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    cout << search(arr, 0, 4, 8);

    return 0;
}