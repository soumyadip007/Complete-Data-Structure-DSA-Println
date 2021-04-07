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
            printf("\n\t%d   ", stack[i]);
        }
    }
    else
    {
        printf("\n\t\nSTACK UNDERFLOW\n");
    }
    printf("\n\t \n\n");
    return;
}

void pop()
{
    if (notUnderFlow()){
    	printf("\n\t\nPopped value : %d\n",stack[top--]);
	}
    else
    {
        printf("\n\t\nSTACK UNDERFLOW\n");
    }
}

void push(int value)
{
    if (notOverFlow())
        stack[++top] = value;
    else
    {
        printf("\n\t\nSTACK OVREFLOW\n");
    };
}

void peek()
{

    if (notUnderFlow()){
    	printf("\n\t\nPeek Value: %d\n",stack[top]);
	}  
    else
    {
        printf("\n\t\nSTACK UNDERFLOW\n");
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
