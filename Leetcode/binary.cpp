#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to count the number of set bits (1s) in the binary representation of a number
int countOnes(int num)
{
    int count = 0;
    while (num)
    {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

// Custom sorting function
bool customSort(int a, int b)
{
    // Compare based on the number of 1's in binary representation
    int countA = countOnes(a);
    int countB = countOnes(b);

    // If the number of 1's is the same, sort in ascending order
    if (countA == countB)
    {
        return a < b;
    }

    // Otherwise, sort based on the number of 1's
    return countA < countB;
}

// Function to sort the array based on the specified criteria
vector<int> sortByBits(vector<int> &arr)
{
    sort(arr.begin(), arr.end(), customSort);
    return arr;
}

// Example usage
int main()
{
    vector<int> arr = {3, 6, 7, 8, 10};
    vector<int> result = sortByBits(arr);

    // Print the sorted array
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
