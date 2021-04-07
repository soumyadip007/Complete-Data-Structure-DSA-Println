#include <stdio.h>
#include <stdbool.h>
#define MAX 5
#define MIN -1
int stack[MAX];
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

void pop()
{
    if (notUnderFlow()){
    	printf("\nPopped value : %d\n",stack[top--]);
	}
    else
    {
        printf("\nSTACK UNDERFLOW\n");
    }
}

void push(int value)
{
    if (notOverFlow())
        stack[++top] = value;
    else
    {
        printf("\nSTACK OVREFLOW\n");
    };
}

void peek()
{

    if (notUnderFlow()){
    	printf("\nPeek Value: %d\n",stack[top]);
	}  
    else
    {
        printf("\nSTACK UNDERFLOW\n");
    };
}

int main()
{
    push(10);
    peek();
    push(20);
    peek();
    push(30);
    peek();
    push(40);
    peek();
    push(50);
    peek();
    push(60);
    peek();
    
    pop();
    peek();
    pop();
    peek();
    pop();
    peek();
    pop();
    peek();
    pop();
    peek();
    pop();
    peek();
	pop();
    
    
    return 0;
}
