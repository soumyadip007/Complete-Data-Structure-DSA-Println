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
	printf("\tEnter the data : ");
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
	printf("\tSuccessfully inserted Data :)\n");
}


void insertAtAny(){	
node *temp=createNode();
printf("\tEnter the data: ");
scanf("%d",&temp->data);
temp->next=NULL; int pos, count=1; 
printf("\tEnter the Position : ");
scanf("%d",&pos); node *t=head, *prev;
if(pos<=0 || (pos>count  && head==NULL))printf("\tInvalid\n");
else if(pos==1){temp->next=head;head=temp;
}else{while(t->next!=NULL && count<pos){
prev=t;t=t->next;count++;}
if(pos>count) {printf("\tInvalid\n");}
else{prev->next=temp;temp->next=t;}
}	
}


void traverse(){
	node *ref=head;
	printf("\tData present in the List: \n");
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
