#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int i = start - 1;

    int pivot = arr[end];

    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[end]);

    return i;
}

void quickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int pivot = partition(arr, start, end);

    quickSort(arr, start, pivot - 1);
    quickSort(arr, pivot + 1, end);
}
int main()
{
    vector<int> arr = {3, 9, 1, 8, 4, 7, 6, 5};

    quickSort(arr, 0, 7);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}