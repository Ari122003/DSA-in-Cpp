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

    void insert(int val, int pos)
    {
        Node *newNode = new Node(val, NULL);

        if (pos == 1)
        {
            newNode->next = head;
            head = newNode;

            return;
        }

        Node *temp = head;

        while (pos > 2 && temp)
        {
            temp = temp->next;
            pos--;
        }

        if (!temp)
        {
            cout << "Invalid position" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
};

int main()
{
    List list;

    list.push_back(2);
    list.push_back(4);
    list.push_back(6);
    list.push_back(8);
    list.push_back(10);

    list.insert(100, 7);

    list.printIterative();

    return 0;
}