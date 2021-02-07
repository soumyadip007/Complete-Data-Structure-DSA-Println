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

void countLen(){
	node *ref=head;
	int count=0;
	while(ref != NULL)
	{
		count++;
		ref=ref->next;
	}	
	printf("\tSize of the List is : %d\n", count);

}

int main(){	


	insert();
	insert();
	insert();
	insert();
	insert();

	countLen();
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
