#include <stdio.h>
#include <stdbool.h>
#define MAX 10
int stack[MAX];
int topFirst = -1;
int topSecond = MAX;
int mid = MAX / 2;

bool notOverFlowFirst()
{
	if (topFirst + 1 < mid)
		return true;
	return false;
}

bool notOverFlowSecond()
{
	if (topSecond - 1 > mid - 1)
		return true;
	return false;
}

bool notUnderFlowFirst()
{
	if (topFirst + 1 > 0)
		return true;
	return false;
}

bool notUnderFlowSecond()
{
	if (topSecond < MAX)
		return true;
	return false;
}

void printTwoStack()
{
	printf("\n\n\t---Printing Two Stacks---\n");
	
	// print 1st stack
	
	if (notUnderFlowFirst())
	{
		printf("\n\tElements in 1st Stack :");
		for (int i = 0; i <= topFirst; i++)
		{
			printf("\n\t%d ", stack[i]);
		}
	}
	else
	{
		printf("\n\t1st Stack : Underflow");
	}

	// print 2nd stack

	if (notUnderFlowSecond())
	{
		printf("\n\tElements in 2nd Stack :");
		for (int i = MAX - 1; i >= topSecond; i--)
		{
			printf("\n\t%d ", stack[i]);
		}
	}
	else
	{
		printf("\n\t2nd Stack : Underflow\n");
	}
	printf("\n");
}

void pushFirstStack(int value)
{
	if (notOverFlowFirst()){
		stack[++topFirst] = value;
		printf("\n\t%d Pushed into 1st stack",value);
	}	
	else
		printf("\n\t1st Stack : Overflow\n");
}

void pushSecondStack(int value)
{
	if (notOverFlowSecond()){
		stack[--topSecond] = value;
		printf("\n\t%d Pushed into 2nd stack",value);
	}
	
	else
		printf("\n\t2nd Stack : Overflow\n");
}

int popFirstStack()
{
	if (notUnderFlowFirst()){
		printf("\n\t%d Popped from 1st Stack",stack[topFirst--]);
	}
	else
		printf("\n\t1st Stack : Underflow\n");
}

void popSecondStack()
{
	if (notUnderFlowSecond()){
		printf("\n\t%d Popped from 2nd Stack",stack[topSecond++]);
	}
	else
		printf("\n\t2nd Stack : Underflow\n");
}

int main()
{
	// STACK UNDERFLOW FOR BOTH CASE
	printTwoStack();

	// 1 value added to both stack
	pushFirstStack(1);
	pushFirstStack(2);
	pushFirstStack(3);
	pushFirstStack(4);
	pushFirstStack(5);
	pushFirstStack(6);	// STACK OVERFLOW	
	
	pushSecondStack(10);
	pushSecondStack(9);
	pushSecondStack(8);
	pushSecondStack(7);
	pushSecondStack(6);
	pushSecondStack(5);	// STACK OVERFLOW

	printTwoStack();

	popFirstStack();
	popFirstStack();
	popSecondStack();
	popSecondStack();
	printTwoStack();

	popFirstStack();
	popFirstStack();
	popFirstStack();
	popFirstStack();	// STACK UNDERFLOW
	
	popSecondStack();
	popSecondStack();
	popSecondStack();
	popSecondStack();	// STACK UNDERFLOW
	
	
	// STACK UNDERFLOW FOR BOTH CASE
	printTwoStack();

	return 0;
}
