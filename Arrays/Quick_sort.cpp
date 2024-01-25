#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = start;
    int count = 0;

    for (int i = pivot + 1; i <= end; i++)
    {
        if (arr[i] <= arr[pivot])
        {
            count++;
        }
    }

    pivot = start + count;

    swap(arr[start], arr[pivot]);

    int i = start, j = end;

    while (i < pivot && j > pivot)
    {
        while (arr[i] < arr[pivot])
        {
            i++;
        }
        while (arr[j] > arr[pivot])
        {
            j--;
        }

        if (i < pivot && j > pivot)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivot;
}

void quickSort(int arr[], int start, int end)
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

    int arr[] = {87, 5, 4, 3, 2, 1, 99, 12, 87, 87, 23, 76, 45, 1000, 59};

    quickSort(arr, 0, 14);

    for (int i = 0; i < 15; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}