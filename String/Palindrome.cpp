#include <iostream>
using namespace std;

bool pal(string &word, int start, int end)
{

    if (start > end)
    {
        return true;
    }
    if (word[start] != word[end])
    {
        return false;
    }

    pal(word, start + 1, end - 1);
}

int main()
{
    string word = "madam";

    // pal(word, 0, word.length() - 1);
    cout << pal(word, 0, word.length() - 1) << endl;
    return 0;
}
