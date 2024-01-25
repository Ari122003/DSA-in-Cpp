#include <iostream>
using namespace std;
int main()
{

    int first = 0, second = 1, p = 2;
    int n = 20;

    int arr[n] = {0, 1};

    while (p != n)
    {
        arr[p++] = arr[first++] + arr[second++];
    }

    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}