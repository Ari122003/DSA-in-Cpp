#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertatTail(node *&tail, int data)
{
    node *newnode = new node(data);

    tail->next = newnode;

    tail = tail->next;
}

void print(node *&head)
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

    node *first = new node(2);
    node *head = first;
    node *tail = first;

    insertatTail(tail, 4);
    insertatTail(tail, 6);
    insertatTail(tail, 8);

    print(head);

    return 0;
}