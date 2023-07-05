#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void insertatposition(Node *&head, int position, int d)
{

    if (position == 1)
    {
        insertathead(head, d);
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

int main(int argc, char const *argv[])
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next;

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertattail(tail, 12);

    print(head);

    insertattail(tail, 15);
    print(head);

    insertatposition(head, 3, 22);
    print(head);

    insertatposition(head, 1, 20);
    print(head);

    return 0;
}
