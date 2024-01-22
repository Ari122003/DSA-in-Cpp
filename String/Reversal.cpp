#include <iostream>
using namespace std;

void reverse(char arr[], int start, int end)
{
    if (start > end)
    {
        return;
    }

    else
    {
        swap(arr[start], arr[end]);
    }

    reverse(arr, start + 1, end - 1);
}

int main()
{

    char name[8] = "Aritra";
    reverse(name, 0, 5);
    cout << name;
    return 0;
}