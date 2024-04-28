#include <iostream>
#include <map>
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

node *head = NULL;

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

void remove()
{
    node *temp = head, *prev = NULL;
    map<int, bool> track;
    while (temp != NULL)
    {

        if (track[temp->data])
        {
            prev->next = temp->next;
        }
        else
        {
            track[temp->data] = true;
            if (prev == NULL)
            {
                prev = head;
            }
            else
            {
                prev = prev->next;
            }
        }

        temp = temp->next;
    }
}

int main()
{
    node *a = new node(1);
    node *b = new node(2);
    node *c = new node(2);
    node *d = new node(2);
    node *e = new node(2);
    node *f = new node(4);

    head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    print();
    remove();
    print();

    return 0;
}