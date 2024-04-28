#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &st, int num)
{

    if (st.empty() || (!st.empty() && st.top() <= num))
    {
        st.push(num);
        return;
    }

    int n = st.top();
    st.pop();

    insert(st, num);
    st.push(n);
}

void sort(stack<int> &st)
{

    if (st.empty())
    {
        return;
    }

    int num = st.top();
    st.pop();

    sort(st);

    insert(st, num);
}

int main()
{
    stack<int> st;

    st.push(200);
    st.push(-5);
    st.push(32);
    st.push(-70);
    st.push(69);

    sort(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}