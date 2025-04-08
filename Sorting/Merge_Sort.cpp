#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int &start, int &end, int &mid)
{
    vector<int> temp;

    int i = start;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i + start] = temp[i];
    }
}
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);

    mergeSort(arr, mid + 1, end);

    merge(arr, start, end, mid);
}
int main()
{

    return 0;
}