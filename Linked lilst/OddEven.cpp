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
node *tail = NULL;

void oddEvenList()
{

    node *even = head->next;

    node *p = head, *q = p->next;

    while (q->next != NULL)
    {
        p->next = q->next;
        p = q;
        q = q->next;
    }

    int count = 0;

    node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (count % 2 == 0)
    {
        p->next = even;
    }
    else
    {
        p->next = NULL;
        q->next = even;
    }
}

void create(int data)
{
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    else
    {
        tail->next = newNode;
        tail = tail->next;
    }
}

void print()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int main()
{

    create(2);
    create(4);
    create(6);
    create(8);
    create(10);
    create(12);
    create(14);

    oddEvenList();

    print();

    return 0;
}