#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int> &st, int num)
{

    if (st.empty())
    {
        st.push(num);
        return;
    }

    int n = st.top();

    st.pop();

    insert(st, num);

    st.push(n);
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    int num = st.top();
    st.pop();
    reverse(st);
    insert(st, num);
}

int main()
{
    stack<int> st;

    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);

    reverse(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}