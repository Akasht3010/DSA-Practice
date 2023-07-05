#include <stdio.h>
#include <stdlib.h>

int rear = -1;
int front = -1;
int arr[5];

void enqueue(int x)
{
    if (rear == 4)
    {
        printf("Full");
        exit(0);
    }

    rear++;
    arr[rear] = x;
    if (front == -1)
    {
        front++;
    }
}

void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("Empty!");
    }
    front++;
}

void display()
{
    for (int i = front; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    enqueue(3);
    display();
    enqueue(4);
    display();
    enqueue(5);
    display();
    enqueue(6);
    display();
    enqueue(7);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();

    return 0;
}
