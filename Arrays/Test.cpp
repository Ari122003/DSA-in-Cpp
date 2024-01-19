#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 2, 1, 3, 2, 2};
    map<int, int> count;
    for (int i = 0; i < nums.size(); i++)
    {
        count[nums[i]]++;
    }
    int pair = 0, nonpair = 0;
    for (auto j : count)
    {
        if (j.second % 2 == 0)
        {
            pair = j.second / 2;
            cout << pair << endl;
        }
        else
        {
            nonpair++;
            pair = pair + (j.second - (j.second / 2)) / 2;
            cout << pair << endl;
        }
    }

    vector<int> answer;
    answer.push_back(pair);
    answer.push_back(nonpair);

    return 0;
}