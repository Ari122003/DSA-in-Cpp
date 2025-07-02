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

void mid1()
{
    int count = 0, mid;

    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    mid = (count / 2) + 1;

    int c = 1;
    temp = head;

    while (c != mid)
    {
        temp = temp->next;
        c++;
    }

    cout << temp->data;
}

void mid2()
{
    node *fast = head->next;
    node *slow = head;

    while (fast != NULL)
    {
        if (fast->next != NULL)
        {
            fast = fast->next->next;
        }
        else
        {
            fast = fast->next;
        }

        slow = slow->next;
    }

    cout << slow->data;
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
    create(16);
    mid2();
    return 0;
}