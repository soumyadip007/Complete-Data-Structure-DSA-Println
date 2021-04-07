#include <stdio.h>
#include <stdbool.h>
#define size 5
int queue[size];
int rear = -1;
int front = -1;

bool isEmpty()
{
    if (rear == -1 && front == -1)
        return true;
    return false;
}

bool isFull()
{
    if (rear == size - 1)
        return true;
    return false;
}

void printQueue(void)
{
    if (!isEmpty())
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d   ", queue[i]);
        }
    }
    else
    {
        printf("Queue is empty\n");
    }
    printf(" \n");
    return;
}

void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue is full\n");
    }
    else if (isEmpty())
    {
        front = rear = 0;
        queue[rear] = value;
    }
    else
    {
        rear++;
        queue[rear] = value;
    }
}

void dequeue()
{

    if (isEmpty() == true)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

int main()
{
    enqueue(1);     
    printQueue();   
    enqueue(2);     
    printQueue();   
    enqueue(3);
    printQueue();   
    enqueue(4);
    printQueue();   
    enqueue(5);
    printQueue();   

    enqueue(6);     // full 

    dequeue();
    printQueue(); 
    dequeue();
    printQueue(); 
    dequeue();
    printQueue(); 
    dequeue();
    printQueue(); 
    dequeue();
    printQueue(); // empty
    dequeue();    // empty
    printQueue(); // empty
}
