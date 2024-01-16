#include <iostream>
#include <map>
using namespace std;
int main()
{

    map<int, string> m;

    m[1] = "Aritra";
    m[3] = "Piri";
    m[5] = "Shoal";
    m[7] = "Nilu";

    for (auto i : m)
    {
        cout << i.first << ":" << i.second << endl;
    }

    return 0;
}