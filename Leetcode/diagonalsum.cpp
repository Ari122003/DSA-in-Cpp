#include <iostream>
using namespace std;
int main()
{
    int mat[20][20] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int sum = 0;
    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + mat[i][j++];
    }

    j = 2;

    for (int i = 0; i < 3; i++)
    {
        sum = sum + mat[i][j--];
    }

    // if (3 % 2 != 0)
    // {
    //     int x = 3 / 2;
    //     sum = sum - mat[x][x];
    // }

    cout << mat;
    return 0;
}