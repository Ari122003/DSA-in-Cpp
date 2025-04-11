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

class List
{

    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val, NULL);
        if (!head)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = tail->next;
    }

    void printIterative()
    {
        Node *temp = head;

        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    void helper(Node *temp)
    {
        if (!temp)
        {
            return;
        }

        cout << temp->val << " ";
        helper(temp->next);
    }

    void printRecursive()
    {
        helper(head);
    }
};

int main()
{
    List *list = new List();

    list->push_back(1);
    list->push_back(3);
    list->push_back(5);
    list->push_back(7);
    list->push_back(9);

    list->printRecursive();
    return 0;
}