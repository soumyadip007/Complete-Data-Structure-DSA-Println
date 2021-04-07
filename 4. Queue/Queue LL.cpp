#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
	int data;
	struct Queue *next;
}node;

node *head=NULL;

node *createNode(){
	node *temp;
	temp=(node*) malloc (sizeof(node));
	return temp;
}


void enQueue(){	
	node *temp=createNode();
	printf("Enter the data : ");
	scanf("%d",&temp->data); //take data
	temp->next=NULL;
	if(head==NULL)
		head=temp;
	else{
		node *ref=head;
		while(ref->next != NULL)
			ref=ref->next;
		ref->next=temp;  //storing	
	}
	printf("Successfully inserted Data :)\n");
}

void printQueue(){
	if(head==NULL){
		printf("Queue is empty\n");
		return;
	}
	node *ref=head;
	printf("\nData present in the Queue: \n");
	while(ref != NULL)
	{
		printf("%d\n", ref->data);
		ref=ref->next;
	}	
}
void deQueue(){	
	node *t=head;	
	node *del;
	if(head==NULL){
		printf("\nQueue is empty\n");
	}
	else if(head->next==NULL){
		del=head;
		head=NULL;
		printf("\nOnly Data %d in the Queue deleted successfully\n",del->data);
	}
	else{
		del=head;
		head=head->next;
		printf("\n %d deleted successfully\n",del->data);
	}
	free(del);
}

int main(){	


	enQueue();
	enQueue();
	enQueue();
	printQueue();
	deQueue();
	deQueue();
	deQueue();
	deQueue();
	printQueue();
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
