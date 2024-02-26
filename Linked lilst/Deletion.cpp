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

void create(node *&tail, int data)
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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteOne(node *&head, int key)
{
    node *p = head->next;
    node *q = head;

    while (p != NULL)
    {
        if (q->data == key)
        {
            head = p;
            break;
        }

        if (p->data == key)
        {
            q->next = p->next;

            break;
        }
        p = p->next;
        q = q->next;
    }
}

int main()
{

    node *first = new node(11);

    node *head = first;
    node *tail = first;

    create(tail, 13);
    create(tail, 15);
    create(tail, 17);
    create(tail, 19);
    print(head);
    deleteOne(head, 11);
    print(head);

    return 0;
}