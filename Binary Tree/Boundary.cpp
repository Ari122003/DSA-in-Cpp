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

vector<int> nodes;

void getLeaves(node *root)
{
    if (root == NULL)
    {
        return;
    }

    getLeaves(root->left);
    getLeaves(root->right);

    if (root->left == NULL && root->right == NULL)
    {
        nodes.push_back(root->data);
    }
}

void left(node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left != NULL && root->right != NULL)
    {
        nodes.push_back(root->data);
    }
    left(root->left);
}

void right(node *root)
{
    if (root == NULL)
    {
        return;
    }

    right(root->right);
    if (root->left != NULL && root->right != NULL)
    {
        nodes.push_back(root->data);
    }
}

int main()
{
    node *root;
    root = create(root);

    left(root);
    getLeaves(root);

    right(root->right);

    for (int i : nodes)
    {
        cout << i << " ";
    }
    return 0;
}