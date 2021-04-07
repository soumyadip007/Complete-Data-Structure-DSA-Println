#include<stdio.h>
#include<stdlib.h>

typedef struct Stack{
	int data;
	struct Stack *next;
}node;

node *stack=NULL;

node *createNode(){
	node *temp;
	temp=(node*) malloc (sizeof(node));
	return temp;
}

void push(){
	printf("\tEnter the Data:- ");
	node *temp=createNode();
	scanf("%d",&temp->data); //take data
	temp->next=NULL;
	temp->next=stack;
	stack=temp;
	printf("\t%d Pushed into Stack\n",temp->data);
}


void pop(){	
	node *t=stack;	
	node *del;
	if(stack==NULL){
		printf("\n\tStack is empty, Underflow\n");
	}
	else if(stack->next==NULL){
		del=stack;
		stack=NULL;
		printf("\n\tPoped Value %d\n",del->data);
	}
	else{
		del=stack;
		stack=stack->next;
		printf("\n\tPopped Value %d\n",del->data);
	}
	free(del);
}

void printStack(){
	if(stack==NULL){
		printf("\n\tStack is empty, Underflow\n");
		return;
	}
	node *ref=stack;
	printf("\n\tData in the Stack:- \n");
	int count=0;
	while(ref != NULL)
	{
		count++;
		printf("\t%d\n", ref->data);
		ref=ref->next;
	}	
	printf("\n\tNumber of elements in the Stack %d\n",count);
}

int main(){	

	push();
	push();
	push();	
	printStack();
	pop();
	pop();
	pop();
	printStack();
	return 0;
	
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
