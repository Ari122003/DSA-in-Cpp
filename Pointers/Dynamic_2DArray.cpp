#include <iostream>
using namespace std;
int main()
{

    int row = 4, col = 3;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {

        arr[i] = new int[col];
    }

    // Taking i/p

    cout << "Enter elements" << endl;

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cin >> arr[r][c];
        }
    }

    // print

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cout << " " << arr[r][c];
        }
        cout << endl;
    }

    return 0;
}