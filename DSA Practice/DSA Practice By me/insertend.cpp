#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

struct node *head;

void insert(int x)
{
    struct node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    if (head != NULL)
        temp->next = head;
    head = temp;
}

void insertAtEnd(int x)
{
    struct node *temp = new node();
    temp->data = x;
    temp->next = NULL;
    struct node *t = head;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = temp;
}
void print()
{
    struct node *temp = head;
    cout << "List is " << endl;
    while (temp != NULL)
    {
        cout << temp->data << " -->";
        cout << " ";
        temp = temp->next;
    }
    cout << "NULL";
    cout << endl;
}
int main(int argc, char const *argv[])
{
    node *head = NULL;
    cout << "How many elements to be added:";
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number to be added at beginning: ";
        cin >> x;
        insert(x);
        print();
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element to be added at last: ";
        cin >> y;
        insertAtEnd(y);
        print();
    }
    return 0;
}
