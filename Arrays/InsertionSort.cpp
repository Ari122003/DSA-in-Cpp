#include <iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        int j = i;

        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
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
    int arr[1000], n, i;

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

    insertion_sort(arr, n);

    cout << "Array after : ";
    print(arr, n);
    return 0;
}