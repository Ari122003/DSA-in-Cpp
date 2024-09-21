#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &arr, int pos, int val)

{
    arr.resize(arr.size() + 1);
    for (int i = arr.size() - 1; i >= pos - 1; i--)
    {

        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = val;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int pos = 6, val = 100;
    insert(arr, pos, val);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}