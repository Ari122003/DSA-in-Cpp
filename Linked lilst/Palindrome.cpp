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

void isPalindrome()
{
    node *temp = head;
    int arr[] = {};
    int i = 0;
    while (temp != NULL)
    {
        arr[i++] = temp->data;
        temp = temp->next;
    }
    int first = 0, last = i - 1;
    cout << i;

    while (first < last)
    {
        if (arr[first] != arr[last])
        {
            cout << "Not";
            return;
        }
        first++;
        last--;
    }

    cout << "YES";
    return;
}

int main()
{
    int arr[] = {};
    node *a = new node(1);
    node *b = new node(2);
    // node *c = new node(1);

    head = a;
    a->next = b;
    // b->next = c;
    isPalindrome();
    return 0;
}