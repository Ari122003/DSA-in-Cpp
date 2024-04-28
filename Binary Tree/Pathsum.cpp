#include <iostream>
#include <vector>
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

vector<int> pathsums;

void sum(node *root, int s)
{
    if (root == NULL)
    {
        return;
    }

    s += root->data;

    if (root->left == NULL && root->right == NULL)
    {
        pathsums.push_back(s);
        return;
    }

    sum(root->left, s);
    sum(root->right, s);
}

int main()
{
    node *root;
    root = create(root);

    sum(root, 0);

    for (int i : pathsums)
    {
        cout << i << " ";
    }
    return 0;
}