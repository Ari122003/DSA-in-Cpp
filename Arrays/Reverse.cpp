#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int endd = n - 1;
    while (start <= endd)
    {
        swap(arr[start], arr[endd]);
        start++;
        endd--;
    }
}

int printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing is done" << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array plz" << endl;
    cin >> n;

    int arr[50];
    // int elements;
    cout << "Enter the elements" << n << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int brr[10];
    cout << "Enter the elements" << n << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    reverse(arr, n);
    reverse(brr, n);

    cout << "Reversed array" << endl;

    printArr(arr, n);
    cout << "reverse brr" << endl;
    printArr(brr, n);

    return 0;
}