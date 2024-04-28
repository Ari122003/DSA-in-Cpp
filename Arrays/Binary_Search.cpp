#include <iostream>
using namespace std;

int binary_saerch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + ((end - start) / 2);
    }

    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4};

    if (binary_saerch(arr, 4, 4) == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found at index:" << binary_saerch(arr, 4, 4);
    }

    return 0;
}