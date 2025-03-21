#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }

    if (arr[n - 1] < arr[n - 2])
    {
        return false;
    }

    return isSorted(arr, n - 1);
}
int main()
{
    int arr[] = {2, 1};

    cout << isSorted(arr, 2);
    return 0;
}