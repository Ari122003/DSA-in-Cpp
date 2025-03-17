#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        int selectedIndex = i;

        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[selectedIndex])
            {
                selectedIndex = j;
            }
        }

        swap(arr[i], arr[selectedIndex]);
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

    cout << "Array after : ";
    print(arr, n);

    return 0;
}