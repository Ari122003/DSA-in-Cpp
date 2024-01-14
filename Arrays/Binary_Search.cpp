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
    int arr[1000], n, i, key;

    cout << "Enter size:" << endl;
    cin >> n;
    cout << "Enter elements" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be found" << endl;
    cin >> key;

    if (binary_saerch(arr, n, key) == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found at index:" << binary_saerch(arr, n, key);
    }

    return 0;
}