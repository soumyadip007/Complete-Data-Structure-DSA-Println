#include<stdio.h>
#include<stdlib.h>
typedef struct Tree{
	int data;
	struct Tree *left;
	struct Tree *right;
}node;
	
node *root=NULL; //head
node* createNode()
{
	node *n;
	n=(node*)malloc(sizeof(node));
	printf("\n\t\tEnter a value:- ");
	scanf("%d",&n->data);
	n->left=NULL;
	n->right=NULL;
	return(n);
}

void inorder(node *h)
{
	if(h!=NULL)
	{
		inorder(h->left);
		printf("%d   ",h->data);
		inorder(h->right);
	}
}

void preorder(node *h)
{
	if(h!=NULL)
	{
		
		printf("%d   ",h->data);
		preorder(h->left);
		preorder(h->right);
	}
}
void postorder(node *h)
{
	if(h!=NULL)
	{
		postorder(h->left);
		postorder(h->right);
		printf("%d   ",h->data);
	}
}


int main()
{
	node *temp=createNode();
	node *tempLeft=createNode();
	node *tempRight=createNode();
	temp->left=tempLeft;
	temp->right=tempRight;
	root=temp;
	printf("\n");
	postorder(root);
}

/*
		10
		/\
	100   200
	
// 10 100 200 - Pre Order
// 100 10 200 - In Order
// 100 200 10 - Pre Order
*/
