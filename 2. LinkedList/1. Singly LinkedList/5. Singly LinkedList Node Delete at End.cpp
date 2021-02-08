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

void traverse(){
	node *ref=head;
	printf("\nData present in the List: \n");
	while(ref != NULL)
	{
		printf("%d\n", ref->data);
		ref=ref->next;
	}	
}

void deleteAtEnd(){	
	node *t=head;	
	node *del;
	if(head->next==NULL){
		del=head;
		head=NULL;
		printf("\nLast block in the list deleted successfully\n");
	}
	else{
		while(t->next->next != NULL)
			t=t->next;
		del=t->next;
		t->next=NULL;
		printf("\nLast block deleted successfully\n");
	}
	free(del);
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
	
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
