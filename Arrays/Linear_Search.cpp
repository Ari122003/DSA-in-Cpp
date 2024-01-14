#include <iostream>
using namespace std;

void linear_search(int arr[], int size, int key)

{
    int i;
    for (i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "Found at index: " << i;
            break;
        }
    }

    if (i == size - 1)
    {
        cout << "Not found";
    }
}
int main()
{

    int arr[1000], n, i, key;

    cout << "Enter size:" << endl;
    cin >> n;
    cout << "Enter elements" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be found" << endl;
    cin >> key;

    linear_search(arr, n, key);

    return 0;
}