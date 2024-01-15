#include <iostream>
using namespace std;
void bubble_sort(int arr[], int size)
{
    bool isSorted = true;

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j + 1], arr[j]);
                isSorted = false;
            }
        }

        if (isSorted == true)
        {
            cout << "Already sorted" << endl;
            break;
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