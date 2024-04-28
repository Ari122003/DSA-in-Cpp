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

void allPath(node *root, vector<int> &path, vector<vector<int>> &ans)
{
    if (root == NULL)
    {
        return;
    }

    path.push_back(root->data);

    if (root->left == NULL && root->right == NULL)
    {

        ans.push_back(path);
    }

    allPath(root->left, path, ans);
    allPath(root->right, path, ans);

    path.pop_back();
}

vector<vector<int>> forAll(node *root)
{
    vector<vector<int>> ans;
    vector<int> path;

    allPath(root, path, ans);

    return ans;
}

int main()
{
    node *root;
    root = create(root);

    vector<vector<int>> ans = forAll(root);

    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
