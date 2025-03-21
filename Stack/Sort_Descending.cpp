#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &s, int num)
{
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }

    int top = s.top();

    s.pop();

    insert(s, num);

    s.push(top);
}
void sort(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int top = s.top();

    s.pop();

    sort(s);

    insert(s, top);
}
int main()
{
    return 0;
}