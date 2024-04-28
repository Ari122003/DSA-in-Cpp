#include <iostream>
using namespace std;
#include <queue>

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

void create(node *&root)
{
    queue<node *> q;
    int data;
    cout << "Enter data: ";
    cin >> data;

    root = new node(data);

    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int ld;
        cout << "Enter left of " << temp->data << ":";
        cin >> ld;

        if (ld != -1)
        {

            temp->left = new node(ld);
            q.push(temp->left);
        }

        int rd;
        cout << "Enter right of " << temp->data << ":";
        cin >> rd;

        if (rd != -1)
        {

            temp->right = new node(rd);
            q.push(temp->right);
        }
    }
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

int main()
{
    node *root;
    create(root);
    inorder(root);
    return 0;
}