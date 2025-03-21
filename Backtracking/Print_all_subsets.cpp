#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr, int i)
{

    static vector<int> temp;

    if (i >= arr.size())
    {
        cout << '[';
        for (int e : temp)
        {
            cout << e;
            cout << ',';
        }
        cout << ']';
        cout << " ";

        return;
    }

    temp.push_back(arr[i]);

    print(arr, i + 1);

    temp.pop_back();

    print(arr, i + 1);
}
int main()
{
    vector<int> arr(100);
    iota(arr.begin(), arr.end(), 1);
    print(arr, 0);
    return 0;
}