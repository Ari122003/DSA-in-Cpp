#include <iostream>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;

    min.push(2);
    max.push(4);
    max.push(6);
    max.push(8);
    max.push(10);

    cout << "Front: " << max.top() << endl;

    min.push(2);
    min.push(4);
    min.push(6);
    min.push(8);
    min.push(10);

    cout << "Front: " << min.top() << endl;

    return 0;
}