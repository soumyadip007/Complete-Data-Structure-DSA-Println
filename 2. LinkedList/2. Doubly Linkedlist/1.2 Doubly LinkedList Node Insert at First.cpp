#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
	struct node *prev;
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
		head->prev=temp;
		temp->next=head;
		head=temp;
	}
}

void traverse(){
	if(head==NULL){
		printf("\nNo data present in the List");
		return;
	}
	node *ref=head;
	while(ref != NULL)
	{
		printf("%d\n", ref->data);
		ref=ref->next;
	}	
}

int main(){	


	insert();
	insert();
	insert();


	traverse();
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
