#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aaabcccdeeefgggggghiiiiiij";

    vector<int> freq(256, 0);

    for (char ch : s)
    {
        freq[ch]++;
    }

    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] != 0)
        {
            cout << (char)i << ":" << freq[i] << endl;
        }
    }
    return 0;
}