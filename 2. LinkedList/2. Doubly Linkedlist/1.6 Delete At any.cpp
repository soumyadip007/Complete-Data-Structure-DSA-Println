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
void deleteAtAny(){	

	if(head==NULL){
		printf("\n\tNo data present in the List");
		return;
	}
	int pos; //take position from user
	printf("\n\tPlease Enter the Position: ");
	scanf("%d",&pos);
	int count=1;
	
	node *t=head, *temp;		
	
	if(pos<=0 || (pos>count  && head==NULL))
		printf("\n\tInvalid");
	else if(head->next==NULL && pos==1){
		temp=head;
		head=NULL;
		free(temp);
		printf("\n\tData has been deleted Successfully");
	}
	else if(pos==1 && head!=NULL)
	{
		temp=head;	
		head=head->next;
		head->prev=NULL;
		free(temp);
		printf("\n\tData has been deleted Successfully");
	}	
	else{
		while(t->next!=NULL && count<pos){
			t=t->next;
			count++;
		}
		if(pos>count) 
			printf("\n\tInvalid");
		else{
			t->prev->next=t->next;
			if(t->next!=NULL)
				t->next->prev=t->prev;
			temp=t;
			free(temp);
			printf("\n\tData has been deleted Successfully");
		}
	}	
}


void traverse(){
	if(head==NULL){
		printf("\n\tNo data present in the List");
		return;
	}
	node *ref=head;
	printf("\n\tNodes present in the List\n");
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
	insert();
	traverse();
	
	deleteAtAny();
	traverse();
	
	deleteAtAny();
	traverse();
	
	deleteAtAny();
	traverse();
	
	deleteAtAny();
	traverse();
	
	deleteAtAny();
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
