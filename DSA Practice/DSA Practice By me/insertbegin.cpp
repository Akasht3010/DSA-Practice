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

void print()
{
    struct node *temp = head;
    cout << "List is " << endl;
    while (temp != NULL)
    {
        cout << temp->data;
        cout << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    node *head = NULL;
    int n, x;
    cout << "how many numbers: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the numbers: ";
        cin >> x;
        insert(x);
        print();
    }

    return 0;
}
