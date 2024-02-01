#include <iostream>
using namespace std;

class Array
{

public:
    static int getSize(char arr[])
    {

        int size = 0;
        int i = 0;

        while (arr[i] != '\0')
        {
            size++;
            i++;
        }

        return size;
    }
};

int main()
{

    char name[100] = "Aritra Adhikary";

    cout << "Size:" << Array::getSize(name);

    return 0;
}