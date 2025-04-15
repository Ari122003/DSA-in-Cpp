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

public:
    List()
    {
        head = new Node(1, new Node(3, new Node(5, new Node(7, new Node(9, new Node(11, NULL))))));
    }
    ~List()
    {
        while (head != NULL)
        {
            pop_front();
        }
    }

    void print()
    {
        Node *temp = head;

        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Empty";
            return;
        }
        Node *temp = head;

        head = temp->next;

        delete temp;
    }

    void pop_back()
    {
        if (!head)
        {
            cout << "Empty";
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void Delete(int pos)
    {

        Node *temp = head;

        if (pos == 1)
        {
            head = temp->next;
            delete temp;
            return;
        }

        while (pos > 2 && temp != NULL)
        {
            temp = temp->next;
            pos--;
        }

        if (temp == NULL || temp->next == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }

        Node *p = temp->next;
        temp->next = p->next;
        delete p;
    }
};

int main()
{
    List list;

    list.print();
    cout << endl;
    list.Delete(7);
    list.print();
    return 0;
}