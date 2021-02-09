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
	printf("\n\tEnter the data : ");
	scanf("%d",&temp->data); //take data
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		head->next=head;
	}
	else{
		node *ref=head;
		while(ref->next != head)
			ref=ref->next;
		ref->next=temp;  //storing	
		temp->next=head;
	}
	printf("\n\tSuccessfully inserted Data :)\n");
}

void traverse(){
	if(head==NULL){
		printf("\n\tNo data present in the List");
		return;
	}
	node *ref=head;
	printf("\n\tNodes present in the List\n");
	do
	{
		printf("\n\t%d\n", ref->data);
		ref=ref->next;
	}
	while(ref != head);	
}

int main(){	


	insert();
	traverse();
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
