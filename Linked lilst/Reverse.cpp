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
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void reverse1()
{
    node *prev = NULL, *temp = head, *front = head->next;

    while (front != NULL)
    {
        head = front;
        temp->next = prev;
        prev = temp;
        temp = front;
        front = front->next;
    }
    temp->next = prev;
}

void reverse2(node *prev, node *temp, node *front)
{

    if (front == NULL)
    {
        temp->next = prev;
        return;
    }
    head = front;
    temp->next = prev;

    reverse2(temp, front, front->next);
}

int main()
{
    create(2);
    create(4);
    create(6);
    create(8);
    create(10);
    print();
    reverse2(NULL, head, head->next);
    print();
    return 0;
}