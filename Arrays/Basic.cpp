#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter size" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element";
        cin >> arr[i];
    }

    cout << "The array is" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}