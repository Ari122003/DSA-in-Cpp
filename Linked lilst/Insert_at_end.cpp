#include <iostream>
using namespace std;
#include <map>

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

void check(node *&head)
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
void check2(node *head)
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
                cout << "Yes";
                return;
            }
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "NO";
        return;
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

    check2(head);

    return 0;
}