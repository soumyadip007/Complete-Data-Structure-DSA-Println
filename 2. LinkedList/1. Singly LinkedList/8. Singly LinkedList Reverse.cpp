#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head=NULL;

node *createNode(){
	node *temp;
	temp=(node*) malloc (sizeof(node));
	return temp;
}


void insert(){	
	node *temp=createNode();
	printf("\tEnter the value: ");
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
}

void traverse(){
	node *ref=head;
	while(ref != NULL)
	{
		printf("\t%d\n", ref->data);
		ref=ref->next;
	}	
}


void reverse(){
	node *prev=NULL, *next=NULL;
	node *current=head;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
}

int main(){	


	insert();
	insert();
	insert();
	insert();
	insert();
	insert();
	printf("\n\tBefore Reverse :- \n");
	traverse();
	reverse();
	printf("\n\tAfter Reverse :- \n");
	traverse();
	
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
