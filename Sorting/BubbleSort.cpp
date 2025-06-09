#include <iostream>
using namespace std;
void bubble_sort(int arr[], int size)
{
    bool isSorted = true;

    for (int i = size - 1; i > 0; i--)
    {

        for (int j = 0; j < i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSorted = false;
            }
        }
    }
}

void bubbleDesc(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
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
    int arr[] = {5, 1, 4, 2, 6, 3, 8, 0};

    int n = 8;

    bubbleDesc(arr, n);

    print(arr, n);
    return 0;
}