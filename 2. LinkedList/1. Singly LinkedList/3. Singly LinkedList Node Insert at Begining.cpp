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

void insertAtFirst(){
	printf("\tEnter the Data:- ");
	node *temp=createNode();
	scanf("%d",&temp->data); //take data
	temp->next=NULL;
	temp->next=head;
	head=temp;
}

void traverse(){
	node *ref=head;
	printf("\tData in the List:- \n");
	int count=0;
	while(ref != NULL)
	{
		count++;
		printf("\t%d\n", ref->data);
		ref=ref->next;
	}	
	printf("\tNumber of elements in the list %d",count);
}

int main(){	

	insertAtFirst();
	insertAtFirst();
	insertAtFirst();

	traverse();
	return 0;
	
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
