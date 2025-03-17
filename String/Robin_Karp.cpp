#include <iostream>
using namespace std;

const long long BASE = 26;
const long long PRIME = 1e9 + 7;

int rabinKarp(string pat, string text)
{
    int m = pat.size();
    int n = text.size();

    if (m > n)
        return -1; // pat is longer than text -> no match

    long long hashPat = 0, hashText = 0;
    long long basePower = 1; // Stores BASE^(m-1) % PRIME

    // **Precompute basePower = BASE^(m-1) % PRIME**
    for (int i = 1; i < m; i++)
    {
        basePower = (basePower * BASE) % PRIME;
    }

    // Compute hash of pat and first window of text
    for (int i = 0; i < m; i++)
    {
        int codePat = pat[i] - 'a' + 1;
        int codeText = text[i] - 'a' + 1;

        hashPat = (hashPat * BASE + codePat) % PRIME;
        hashText = (hashText * BASE + codeText) % PRIME;
    }

    // Sliding window using while loop
    int i = 0, j = m - 1;
    while (j < n)
    {
        if (hashPat == hashText)
        {
            if (text.substr(i, m) == pat) // Double check for hash collision
                return i;
        }

        // Move the window
        if (j < n - 1)
        {
            int codeOld = text[i] - 'a' + 1;
            int codeNew = text[j + 1] - 'a' + 1;

            // Remove leftmost character and shift the hash left
            hashText = (hashText - (codeOld * basePower) % PRIME + PRIME) % PRIME;
            hashText = (hashText * BASE + codeNew) % PRIME;
        }

        i++;
        j++;
    }

    return -1; // pat not found
}

int main()
{
    string text = "Aritra";
    string pat = "ra";

    int index = rabinKarp(pat, text);

    cout << index;

    return 0;
}
