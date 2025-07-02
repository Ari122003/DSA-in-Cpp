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

void detectCycle()
{
    node *fast = head, *slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            cout << "Has cycle" << endl;
            return;
        }
    }

    cout << "No cycle";
    return;
}

void removeCycle()
{
    node *fast = head, *slow = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            slow = head;
            while (true)
            {
                if (slow == fast)
                {
                    while (fast->next != slow)
                    {
                        fast = fast->next;
                    }
                    fast->next = NULL;
                    return;
                }
                slow = slow->next;
                fast = fast->next;
            }
        }
    }
}

int main()
{
    node *a = new node(1);
    node *b = new node(2);
    node *c = new node(3);
    node *d = new node(4);

    head = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;

    detectCycle();
    removeCycle();
    detectCycle();
    return 0;
}