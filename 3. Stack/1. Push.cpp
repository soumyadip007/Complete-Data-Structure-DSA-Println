#include <stdio.h>
#include <stdbool.h>
#define MAX 5
#define MIN -1
int stack[MAX];//5
int top = -1;


bool notOverFlow()
{
    if (top + 1 < MAX )
        return true;
    return false;
}

bool notUnderFlow()
{
    if (top != MIN)
        return true;
    return false;
}

void printStack()
{
    if (notUnderFlow())
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d   ", stack[i]);
        }
    }
    else
    {
        printf("\nSTACK UNDERFLOW\n");
    }
    printf(" \n\n");
    return;
}

void push(int value)
{
    if (notOverFlow())
        stack[++top] = value;
    else
    {
        printf("\nSTACK OVERFLOW\n");
    }
}

int main()
{
    push(10);
    printStack();
    push(20);
    printStack();
    push(30);
    printStack();
    push(40);
    printStack();
    push(50);
    printStack();
    push(60);
    printStack();
    push(70);
    printStack();
    return 0;
}
