#include <iostream>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = start + ((end - start) / 2);
    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int mainarrayindex = start;

    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainarrayindex++];
    }

    mainarrayindex = mid + 1;

    for (int j = 0; j < len2; j++)
    {
        arr2[j] = arr[mainarrayindex++];
    }

    int p = 0, q = 0;
    mainarrayindex = start;

    while (p < len1 && q < len2)
    {
        if (arr1[p] <= arr2[q])
        {
            arr[mainarrayindex++] = arr1[p++];
        }
        else
        {
            arr[mainarrayindex++] = arr2[q++];
        }
    }

    while (p < len1)
    {
        arr[mainarrayindex++] = arr1[p++];
    }
    while (q < len2)
    {
        arr[mainarrayindex++] = arr2[q++];
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + ((end - start) / 2);

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end);
}

int main()
{

    int arr[] = {5, 4, 3, 2, 1, 99, 45, 87, 12, 76, 40, 89, 34, 78, 33, 1000, 764, 397};

    mergeSort(arr, 0, 17);

    for (int i = 0; i < 18; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}