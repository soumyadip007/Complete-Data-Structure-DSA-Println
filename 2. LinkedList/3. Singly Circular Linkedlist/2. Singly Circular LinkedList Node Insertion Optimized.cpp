#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *last=NULL;

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
	if(last==NULL){
		 last =temp;
		 last->next= last;
	}else{
		temp->next=last->next;
		last->next=temp;
	}

	printf("\n\tSuccessfully inserted Data :)\n");
}

void traverse(){
	if(last==NULL){
		printf("\n\tNo data present in the List");
		return;
	}
	node *ref=last->next;
	printf("\n\tNodes present in the List\n");
	do
	{
		printf("\n\t%d\n", ref->data);
		ref=ref->next;	
	}
	while(ref != last->next);	
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
