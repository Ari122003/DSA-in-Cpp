#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

node *head = NULL;

void create(int key, int data)
{
    node *newnode = new node(data);

    if (head == NULL)
    {
        head = newnode;
        newnode->next = newnode;
    }

    else
    {
        node *temp = head;

        while (temp->data != key)
        {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void del(int key)
{
    node *p = head->next;
    node *q = head;

    if (head == NULL)
    {
        cout << "Empty";
    }
    else
    {

        while (p->data != key)
        {
            p = p->next;
            q = q->next;
        }
        if (p == head)
        {
            head = head->next;
        }
        q->next = p->next;
        p->next = NULL;
    }
}

void print()
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main()
{
    create(0, 1);
    create(1, 3);
    create(3, 5);
    create(3, 7);
    create(1, 9);
    create(3, 999);

    print();

    del(5);
    print();

    return 0;
}