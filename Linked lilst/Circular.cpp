#include <iostream>
using namespace std;
#include <map>

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

void create(int key, int data)
{
    node *newnode = new node(data);

    if (head == NULL)
    {
        head = newnode;
        newnode->next = newnode;
    }

    else
    {
        node *temp = head;

        while (temp->data != key)
        {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void del(int key)
{
    node *p = head->next;
    node *q = head;

    if (head == NULL)
    {
        cout << "Empty";
    }
    else
    {

        while (p->data != key)
        {
            p = p->next;
            q = q->next;
        }
        if (p == head)
        {
            head = head->next;
        }
        q->next = p->next;
        p->next = NULL;
    }
}

void print()
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

void check()
{
    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        cout << "Not";
        return;
    }

    node *temp = head;
    do
    {

        temp = temp->next;

        if (temp == head)
        {
            cout << "Yes";
            break;
        }

        if (temp == NULL)
        {
            cout << "NO";
            break;
        }
    } while (true);
}

bool check2()
{
    node *temp = head;
    map<int, int> track;

    while (temp != NULL)
    {
        track[temp->data]++;
        for (auto i : track)
        {
            if (i.second == 2)
            {

                return true;
            }
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {

        return false;
    }
}

int main()
{
    create(0, 1);
    create(1, 3);
    create(3, 5);
    create(3, 7);
    create(1, 9);
    create(3, 999);

    if (check2())
    {
        cout << "yes";
    };

    return 0;
}