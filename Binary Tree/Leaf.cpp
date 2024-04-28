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

vector<int> leaves;

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
        leaves.push_back(root->data);
    }
}

int main()
{
    node *root;
    root = create(root);

    getLeaves(root);

    for (int i : leaves)
    {
        cout << i << " ";
    }
    return 0;
}