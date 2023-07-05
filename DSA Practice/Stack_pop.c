#include <stdio.h>
#include <stdlib.h>
int top = -1;

int arr[5];

void push(int x)
{
    if (top == 4)
    {
        printf("\nOverFlow!");
        exit(0);
    }

    top++;
    arr[top] = x;
}
void pop()
{
    if (top == -1)
    {
        printf("\nEmpty");
    }
    top = top - 1;
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d  \n", arr[i]);
    }
    printf("---------");
}
int main(int argc, char const *argv[])
{
    push(3);
    push(4);
    push(1);
    push(9);
    push(69);
    display();
    // push(41);
    // push(78);
    pop();
    display();
    pop();
    display();
    pop();
    display();
    return 0;
}
