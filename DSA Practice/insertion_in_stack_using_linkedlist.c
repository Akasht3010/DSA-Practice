#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int x)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = x;
    if (top == NULL)
    {
        top = newnode;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("UnderFLow!");
    }
    else
    {
        struct node *temp = top;
        int temp_data = top->data;
        top = top->next;
        free(temp);
        // return temp->data;
    }
}

void display()
{
    if (top == NULL)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        printf("The stack is \n");
        struct node *temp = top;
        while (temp->next != NULL)
        {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("%d--->NULL\n\n", temp->data);
    }
}
int main(int argc, char const *argv[])
{
    push(10);
    display();
    push(20);
    display();
    push(30);
    display();
    push(40);
    display();
    pop();
    display();
    pop();
    display();
    return 0;
}
