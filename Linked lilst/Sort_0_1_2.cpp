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

void sort()
{
    node *zero = new node(-1), *one = new node(-1), *two = new node(-1);

    node *temp = head;
    node *z = zero, *o = one, *t = two;

    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            z->next = temp;
            z = z->next;
        }
        else if (temp->data == 1)
        {
            o->next = temp;
            o = o->next;
        }
        else
        {
            t->next = temp;
            t = t->next;
        }

        temp = temp->next;
    }

    if (one->next != NULL)
    {
        z->next = one->next;
        o->next = two->next;
    }
    else
    {
        z->next = two->next;
    }

    t->next = NULL;

    head = zero->next;
}

int main()
{
    int arr[] = {};
    node *a = new node(2);
    node *b = new node(1);
    node *c = new node(0);
    node *d = new node(2);
    node *e = new node(1);
    node *f = new node(0);

    head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    // print();
    // sort();
    // print();
    cout << sizeof(arr) / sizeof(int);
    return 0;
}