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

void deleteAtEnd(){	
	if(head==NULL){
		printf("\n\tNo data present in the List");
		return;
	}
	node *t=head;	
	node *del;
	if(head->next==NULL){
		del=head;
		head=NULL;
	}else{
		while(t->next != NULL)
			t=t->next;
		del=t;
		t->prev->next=NULL;		
	}
	printf("\tDeleting %d\n",del->data);
	free(del);
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
	
	deleteAtEnd();
	traverse();
	
	deleteAtEnd();
	traverse();
	
	deleteAtEnd();
	traverse();
	deleteAtEnd();
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
