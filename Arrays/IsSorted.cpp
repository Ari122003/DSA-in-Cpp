#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int arr[1000], n, i;

    cout << "Enter size:" << endl;
    cin >> n;
    cout << "Enter elements" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (isSorted(arr, n))
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not sorted";
    }

    return 0;
}