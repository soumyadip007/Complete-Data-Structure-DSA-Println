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
	if(head==NULL)
		head=temp;
	else{
		node *ref=head;
		while(ref->next != NULL)
			ref=ref->next;
		temp->prev=ref;
		ref->next=temp;  //storing
	
	}
}


void insertAtAny(){	
	node *temp=createNode();
	int count=1, pos; //take position from user 	
	printf("\n\tEnter the value: ");
	scanf("%d",&temp->data); //take data
	temp->prev=NULL;
	temp->next=NULL;
	printf("\n\tEnter the position: ");
	scanf("%d",&pos);
	if(pos<=0 || (pos>count  && head==NULL)) 
		printf("\n\tInvalid\n");
	else if(pos==1 && head==NULL){
		head=temp;
	}
	else if(pos==1){
		head->prev=temp;
		temp->next=head;
		head=temp;
	}
	else{
		node *t=head;
		while(t->next!=NULL && count<pos){
			t=t->next;
			count++;
		}
		if(pos>count) {
			printf("\n\tInvalid\n");
		}
		else{
			temp->prev=t->prev;
			temp->next=t;
			t->prev->next=temp;
			t->prev=temp;		
		}	
	}
}


void traverse(){
	if(head==NULL){
		printf("\n\tNo data present in the List");
		return;
	}
	node *ref=head;
	printf("\tNodes present in the List\n");
	while(ref != NULL)
	{
		printf("\t%d\n", ref->data);
		ref=ref->next;
	}	
}


int main(){	


	insert();
	insert();
	insert();
	
	traverse();
	
	insertAtAny();
	traverse();
	
	insertAtAny();
	traverse();
	
	insertAtAny();
	traverse();
	
	insertAtAny();
	traverse();
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
