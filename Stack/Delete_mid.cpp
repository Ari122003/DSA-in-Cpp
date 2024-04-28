#include <iostream>
#include <stack>
using namespace std;

void deleteMid(stack<int> &st, int top, int size)
{
    if (top == size / 2)
    {
        st.pop();

        return;
    }

    int t = st.top();
    st.pop();

    deleteMid(st, --top, size);

    st.push(t);
    return;
}

int main()
{
    stack<int> st;

    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    // st.push(10);

    int top = st.size() - 1;

    deleteMid(st, top, st.size());

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}