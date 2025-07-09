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

node *head;
node *tail;

void create(int data)
{
    node *newnode = new node(data);
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
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

void deleteOne(int key)
{
    node *temp = head;

    while (temp != NULL)
    {

        if (temp->data == key)
        {
            if (temp->prev == NULL)
            {
                head = temp->next;
                temp->next->prev = NULL;
                temp->next = NULL;
                break;
            }

            else if (temp->next == NULL)
            {
                tail = temp->prev;
                temp->prev->next = NULL;
                temp->prev = NULL;
                break;
            }

            else
            {

                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                temp->prev = NULL;
                temp->next = NULL;
                break;
            }
        }

        temp = temp->next;
    }

    delete temp;
}

int main()
{

    node *first = new node(100);
    head = first;
    tail = first;

    create(200);
    create(300);
    create(400);
    create(500);

    print();

    deleteOne(300);

    print();

    cout << head->data << endl;
    cout << tail->data;

    return 0;
}