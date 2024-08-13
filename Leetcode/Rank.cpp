#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    vector<int> score = {10, 3, 8, 9, 4};
    map<int, int> rank;
    int size = score.size();

    for (int i = 0; i < size; i++)
    {
        rank[score[i]] = i;
    }

    sort(score.begin(), score.end());

    vector<int> ranking(size, 0);
    int count = 1;

    for (auto i : score)
    {
        int pos = rank.at(i);
        ranking[pos] = count;
        count++;
    }

    vector<string> ans;

    for (auto i : ranking)
    {
        if (i == 1)
        {
            ans.push_back("Gold Medal");
        }
        else if (i == 2)
        {
            ans.push_back("Bronze Medal");
        }
        else if (i == 3)
        {
            ans.push_back("Silver Medal");
        }
        else
        {
            ans.push_back(to_string(i));
        }
    }

    for (auto i : ans)
    {
        cout << i << endl;
    }

    return 0;
}