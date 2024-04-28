#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *create(node *root)
{
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new node(data);

    cout << "Enter to insert left of " << data << ":";
    root->left = create(root->left);
    cout << "Enter to insert right of " << data << ":";
    root->right = create(root->right);

    return root;
}

void solve(node *root, int sum, int &maxSum, int len, int &maxLen)
{
    if (root == NULL)
    {

        if (len > maxLen)
        {
            maxLen = len;
            maxSum = sum;
        }
        else if (len == maxLen)
        {
            maxSum = max(sum, maxSum);
        }
        return;
    }

    sum = sum + root->data;

    solve(root->left, sum, maxSum, len + 1, maxLen);
    solve(root->right, sum, maxSum, len + 1, maxLen);
}

int main()
{
    node *root;
    root = create(root);

    int len = 0;
    int maxLen = 0;

    int sum = 0;
    int maxSum = INT_MIN;

    solve(root, sum, maxSum, len, maxLen);

    cout << maxSum;

    return 0;
}