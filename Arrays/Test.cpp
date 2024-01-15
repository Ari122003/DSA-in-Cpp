#include <iostream>
using namespace std;

int check(int nums[], int target, int size)
{

    int counter = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((nums[i] + nums[j]) < target)
            {
                counter++;
            }
        }
    }

    return counter;
}
int main()
{
    int nums[5] = {-1, 1, 2, 3, 1};

    cout << check(nums, 2, 5);

    return 0;
}