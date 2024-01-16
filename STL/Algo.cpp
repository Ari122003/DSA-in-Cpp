#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(4);

    v.push_back(10);
    v.push_back(6);

    v.push_back(8);

        cout << binary_search(v.begin(), v.end(), 5) << endl;

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for (auto i : v)
    {
        cout << " " << i;
    }

    return 0;
}