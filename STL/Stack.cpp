#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);

    cout << s.top() << endl;
    cout << s.size() << endl;
    s.pop();
    cout << s.top() << endl;

    return 0;
}