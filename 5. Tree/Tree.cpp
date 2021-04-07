#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct Tree{
	int data;
	struct Tree *left;
	struct Tree *right;
}node;
	
node *root=NULL;
node* createnode()
{
	node *n;
	n=(node*)malloc(sizeof(node));
	return(n);
}

node* insert(node *temp,node *h)
{
	if(h==NULL)
	{
		h=temp;
		printf("\n\t\tElement inserted : %d\n",h->data);
	}
	else if(temp->data==h->data)
	{
		return h;
	}
	else if(temp->data>h->data)
	{
		h->right=insert(temp,h->right);
	}
	else if(temp->data<h->data)
	{
		h->left=insert(temp,h->left);
	}
	return h;
}


bool search(node *h,int data)
{
	if(h==NULL)
	{
		return false;
	}
	else if(h->data==data)
	{
		return true;
	}
	else if(data>h->data)
	{
		return search(h->right,data);
	}
	else
	{
		return search(h->left,data);
	}
}



node* findMin(node *t)
{
	while(t->right!=NULL)
		t=t->right;
	return t;
}


node* findMax(node *t)
{
	while(t->left!=NULL)
		t=t->left;
	return t;
}

node* delete_node(node *h,int item)
{
	if(h==NULL)
	{
		return h;
	}
	else if(item>h->data)
	{
		h->right=delete_node(h->right,item);
	}
	else if(item<h->data)
	{
		h->left=delete_node(h->left,item);
	}
	else{
		if(h->left==NULL && h->right==NULL)
		{
			free(h);
			h=NULL;
			printf("\n\t\t%d deleted successfully\n",item);
		}
		else if(h->left==NULL)
		{
			node *temp;
			temp=h;
			h=h->right;
			free(temp);
			printf("\n\t\t%d deleted successfully\n",item);
		}
		else if(h->right==NULL)
		{
			node *temp;
			temp=h;
			h=h->left;
			free(temp);
			printf("\n\t\t%d deleted successfully\n",item);
		}
		else if(h->left!=NULL && h->right!=NULL)
		{
			node *temp=findMin(h->right);
			printf("\n\t\t%d deleted successfully\n",h->data);
			printf("\n\t\t%d replaced %d & will be delete from it's position'\n",temp->data,h->data);
			h->data=temp->data;
			h->right=delete_node(h->right,temp->data);
		}
		return h;	
	}
}


void inorder(node *h)
{
	if(h!=NULL)
	{
		inorder(h->left);
		printf("%d \t",h->data);
		inorder(h->right);
}
}

void preorder(node *h)
{
	if(h!=NULL)
	{
		
		printf("%d \t",h->data);
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
		printf("%d \t",h->data);
}
}
int menu()
{
	int choice;
	printf("\n\t\tENTER YOUR CHOICE:- ");
	scanf("%d",&choice);
	return(choice);
}

main()
{
	printf("\n1: Insert \n");
	printf("\n2: Delete\n");
	printf("\n3: Search\n");
	printf("\n0: Traverse the tree\n");
	while(1)
	{
		switch(menu())
		{
			case 1:
				node *temp;
				temp=createnode();
				printf("\n\t\tEnter a value:- ");
				scanf("%d",&temp->data);
				temp->left=NULL;
				temp->right=NULL;
				node *h;
				h=root;
				root=insert(temp,h);
			break;
			case 2:
				int data;
				printf("\n\t\tEnter the data you want to delete:- ");
				scanf("%d",&data);
				root=delete_node(root,data);
				break;
			case 3:
				int item;
				printf("\n\t\tEnter the data you want to search:- ");
				scanf("%d",&item);
				if(search(root,item))
				{
					printf("\n\t\tItem found\n");
				}
				else{
					printf("\nItem not found\n");
				}
				break;
			case 0:
				
				if(root==NULL)
				{
					printf("\n\t\tNo node present in the tree\n");
				}
				else
				{
					printf("\n\t\tIn-Order traversal:- \n\n\t\t");
					inorder(root);
					printf("\n\t\tPre-Order traversal:- \n\n\t\t");
					preorder(root);
					printf("\n\t\tPost-Order traversal:- \n\n\t\t");
					postorder(root);
					node *p=findMax(root);
					printf("\n\n\t\tMinimum value is:- %d",p->data);
					node *q=findMin(root);
					printf("\n\n\t\tMinimum value is:- %d\n",q->data);
				}
				break;
			default:
				printf("\nENTER YOUR CHOICE BETWEEN 1,2,3,4\n");
				break;
		}
	}
}
