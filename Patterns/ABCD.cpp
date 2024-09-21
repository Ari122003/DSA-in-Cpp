#include <bits/stdc++.h>
using namespace std;

void print(int rows)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)(i + 65) << " ";
        }

        cout << endl;
    }
}
int main()
{
    print(6);
    return 0;
}