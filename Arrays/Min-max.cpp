#include <iostream>
using namespace std;

void max(int arr[], int size)
{
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The max element is: " << max << endl;
}

int min(int arr[], int size)
{
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
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

    max(arr, n);
    cout << "The minimum element is:" << min(arr, n);

    return 0;
}