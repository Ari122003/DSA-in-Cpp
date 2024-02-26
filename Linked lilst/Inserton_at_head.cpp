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

void insertatHead(node *&head, int data)
{

    node *newnode = new node(data);

    newnode->next = head;

    head = newnode;
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
    node *node1 = new node(10);
    node *head = node1;

    insertatHead(head, 12);
    insertatHead(head, 14);

    print(head);

    return 0;
}