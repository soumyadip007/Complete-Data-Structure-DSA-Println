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
	printf("\n\tEnter the value: ");
	scanf("%d",&temp->data); //take data
	temp->prev=NULL;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		head->prev=head;
		head->next=head;
	}else{
		temp->prev=head->prev;
		temp->next=head;
		head->prev->next=temp;
		head->prev=temp;
	}

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
		ref=ref->prev;	
		printf("\n\t%d\n", ref->data);
		
	}
	while(ref != head);	
}


int main(){	


	insert();
	insert();
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
