#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *createNode(){
	node *temp;
	temp=(node*) malloc (sizeof(node));
	return temp;
}

int main(){	

	node *head;
	node *temp=createNode();
	temp->data=100;
	temp->next=NULL;
	if(head==NULL){
			head=temp;
					
			printf("Data: %d\n",temp->data);
			printf("Head: %d\n",head);
			printf("Temp: %d\n",temp);
	}
	
	

	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
