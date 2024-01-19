#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    int n;
    cout << "Enter size" << endl;
    cin >> n;

    int *arr = new int[5];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    print(arr, n);

    return 0;
}