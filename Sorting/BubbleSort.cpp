#include <iostream>
using namespace std;
void bubble_sort(int arr[], int size)
{
    bool isSorted = true;

    for (int i = size - 1; i > 0; i--)
    {

        for (int j = 0; j < i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSorted = false;
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

    cout << "Array before : ";
    print(arr, n);
    cout << endl;

    bubble_sort(arr, n);

    cout << "Array after : ";
    print(arr, n);
    return 0;
}