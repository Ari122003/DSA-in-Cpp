#include <bits/stdc++.h>
using namespace std;

void permute(vector<int> arr, int i)
{
    if (i >= arr.size())
    {

        cout << '[';
        for (int e : arr)
        {
            cout << e;
        }
        cout << ']';
        cout << " ";

        return;
    }

    for (int j = i; j < arr.size(); j++)
    {
        swap(arr[i], arr[j]);

        permute(arr, i + 1);

        swap(arr[i], arr[j]);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    permute(arr, 0);
    return 0;
}