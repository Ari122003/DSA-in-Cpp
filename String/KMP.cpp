#include <bits/stdc++.h>
using namespace std;

void KMP(string text, string pattern)
{

    int m = pattern.length();
    int n = text.length();

    vector<int> lps(m, 0);

    int i = 0;
    int j = 1;

    while (j < m)
    {
        if (pattern[i] == pattern[j])
        {
            lps[j] = i;
            i++;
        }
        else
        {
            i = 0;
        }
        j++;
    }

    i = 0;
    j = -1;

    while (i < n)
    {
        if (j < m - 1 && pattern[j + 1] == text[i])
        {
            i++;
            j++;
        }
        else
        {
            if (j == -1)
            {
                i++;
            }
            else
            {

                j = lps[j];
            }
        }
    }

    if (j == i)
        cout << "Pattern found at index " << i - j << endl;
    else
        cout << "Pattern not found" << endl;
}
int main()
{
    KMP("abcdeabfabc", "bfa");
    return 0;
}