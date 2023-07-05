#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

void linkedlisttraversal(struct node *ptr)
{
    cout<<"Linked List is: ";
    while (ptr != NULL)
    {
        cout <<ptr->data<<"--> ";
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{
    struct node *head;
    struct node *second;
    struct node *third;
    // Allocate memory for nodes in the linked list in head
    head = new node();
    second = new node();
    third = new node();

    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 70;
    third->next = NULL;
    linkedlisttraversal(head);
    return 0;
}
