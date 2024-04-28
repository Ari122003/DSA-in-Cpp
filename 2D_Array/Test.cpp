#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<char>> matrix(3, vector<char>(3, 0));
    matrix[0][0] = '1';
    matrix[0][1] = '2';
    matrix[0][2] = '3';
    matrix[1][0] = '4';
    matrix[1][1] = '5';
    matrix[1][2] = '6';
    matrix[2][0] = '7';
    matrix[2][1] = '8';
    matrix[2][2] = '9';

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[i][j] = (matrix[i][j] - '0' + 48);
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    return 0;
}
