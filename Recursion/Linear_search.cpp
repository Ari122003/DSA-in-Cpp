#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    // Base case

    if (size == 0)
    {
        return false;
    }

    // Logic

    if (arr[0] == key)
    {
        return true;
    }

    // Recursion

    search(arr + 1, size - 1, key);
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 5, 6, 7, 8};
    cout << search(arr, 9, 4);
    return 0;
}