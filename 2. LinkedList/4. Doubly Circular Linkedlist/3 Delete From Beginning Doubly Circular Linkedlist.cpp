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

void insertAtEnd(){	
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
		printf("\n\t%d\n", ref->data);
		ref=ref->next;	
	}
	while(ref != head);	
}

void deleteAtBeginning(){
	if(head==NULL){
		printf("\n\tNo data present in the List");
		return;
	}
	node *del;
	if(head->next==head){
		del=head;
		head=NULL;
	}else{
		del=head;
		head->prev->next=head->next;
		head->next->prev=head->prev;
		head=head->next;	
	}
	printf("\n\tValue Deleted from the List : %d\n",del->data);
	free(del);	

}


int main(){	


	insertAtEnd();
	insertAtEnd();
	insertAtEnd();
	insertAtEnd();
	insertAtEnd();


	traverse();
	
	deleteAtBeginning();
	traverse();
	
	deleteAtBeginning();
	traverse();
	
	deleteAtBeginning();
	traverse();
	
	deleteAtBeginning();
	traverse();
	
	deleteAtBeginning();
	traverse();
	
	deleteAtBeginning();
	traverse();
	
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
