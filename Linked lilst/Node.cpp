#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val, Node *next)
    {
        this->val = val;
        this->next = next;
    }
};
int main()
{
    Node *node = new Node(5, NULL);

    cout << node->next;
    return 0;
}
