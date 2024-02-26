#include <iostream>
using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void create(node *&tail, int data)
{
    node *newnode = new node(data);

    tail->next = newnode;
    newnode->prev = tail;

    tail = tail->next;
}

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{

    node *first = new node(10);

    node *head = first;
    node *tail = first;

    create(tail, 12);
    create(tail, 14);
    create(tail, 16);
    create(tail, 18);

    print(head);
    cout << head->data << endl;
    cout << tail->data;

    return 0;
}