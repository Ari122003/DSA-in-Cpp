#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 6;

    for (int i = 1; i <= row; i++)
    {
        // For space
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }

        // For star
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
            // cout<<"* "; will print isoleses triangle
        }

        cout << endl;
    }

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        for (int j = row - i + 1; j >= 1; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}