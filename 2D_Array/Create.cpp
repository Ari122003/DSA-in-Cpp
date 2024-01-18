#include <iostream>
using namespace std;
int main()
{

    int arr[20][20], m, n;

    cout << "Enter size" << endl;
    cout << "Rows:";
    cin >> m;
    cout << "Colums:";
    cin >> n;

    cout << "Enter values:" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j][i];
        }
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " " << arr[j][i];
        }
        cout << endl;
    }

    return 0;
}