#include <iostream>
using namespace std;
class stack
{

private:
    int top;
    int *arr;

public:
    int size;
    stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack is full" << endl;
        }
    }

    void pop()
    {
        if (top > -1)
        {
            top--;
        }
        else
        {
            cout << "Underflow";
        }
    }

    void peek()
    {
        if (top != -1)
        {
            cout << arr[top] << endl;
        }
        else
        {
            cout << "Empty";
        }
    }

    void print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    stack st(5);
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.print();

    return 0;
}