#include <bits/stdc++.h>
using namespace std;

int *create(int n)
{

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr[i] = val;
    }

    return arr;
}

void modify(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int n;
    cout << "Enter size" << endl;

    cin >> n;
    int *arr = create(n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    modify(arr, n);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}