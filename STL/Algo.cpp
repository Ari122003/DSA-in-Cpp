#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> update(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr;
}
int main()
{
    vector<int> v;

    v.push_back(10);

    v.push_back(8);
    v.push_back(6);

    v.push_back(4);

    // cout << binary_search(v.begin(), v.end(), 5) << endl;

    // sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());

    vector<int> arr = update(v);

    for (auto i : arr)
    {
        cout << " " << i;
    }

    return 0;
}