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
	printf("\nEnter the data : ");
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
	if(head==NULL){
		printf("\nNo data present in the List");
		return;
	}
	node *ref=head;
	printf("\nData present in the List: \n");
	while(ref != NULL)
	{
		printf("%d\n", ref->data);
		ref=ref->next;
	}	
}

void deleteAtAny(){	
	if(head==NULL){
		printf("\nNo data present in the List");
		return;
	}
	int pos; //take position from user
	printf("\nPlease Enter the Position: ");
	scanf("%d",&pos);
	int count=1;
	node *t=head, *prev, *temp;	

	if(pos<=0 || (pos>count  && head==NULL))
		printf("Invalid");
	else if(pos==1 && head!=NULL)
	{
		temp=head;	
		head=head->next;
		free(temp);
		printf("Data has been deleted Successfully");
	}	
	else{
		while(t->next!=NULL && count<pos){
			prev=t;		
			t=t->next;
			count++;
		}
		if(pos>count) 
				printf("Invalid");
		else{
			prev->next=t->next;
			temp=t;
			free(temp);
			printf("Data has been deleted Successfully");
		}
	}
	
}



int main(){	


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
	return 0;
}


/*
*	Author: Soumyadip Chowdury
*	Youtube: Println
*	Github: Soumyadip007
*/
