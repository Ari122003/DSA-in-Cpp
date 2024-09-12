#include <iostream>
using namespace std;

void selection_sort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i];
    }
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

    cout << "Array before : " << endl;
    print(arr, n);
    cout << endl;

    selection_sort(arr, n);

    cout << "Array after : ";
    print(arr, n);

    return 0;
}