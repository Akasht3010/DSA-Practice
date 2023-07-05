#include<iostream>
using namespace std;
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void enqueue(Queue *q,int x){
    if(q->rear==q->size-1){
        printf("Queue is full");
    }
    else{
        q->rear++;
        q->Q[q->rear] =x;
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

