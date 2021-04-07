#include<stdio.h>
#include<stdlib.h>
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
	printf("\n\t\tEnter a value:- ");
	scanf("%d",&n->data);
	n->left=NULL;
	n->right=NULL;
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

node* findMin(node *t)
{
	while(t->left!=NULL)
		t=t->left;
	return t;
}

node* deleteNode(node *h,int item)
{
	if(h==NULL)
	{
		printf("\n\t\tTree is Empty\n",item);
		return h;
	}
	else if(item>h->data)
	{
		h->right=deleteNode(h->right,item);
	}
	else if(item<h->data)
	{
		h->left=deleteNode(h->left,item);
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
			printf("\n\t\t%d replaced %d as Root Node\n",temp->data,h->data);
			h->data=temp->data;
			h->right=deleteNode(h->right,temp->data);
		}
		return h;	
	}
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
	printf("\n0: Traverse the Tree\n");
	while(1)
	{
		switch(menu())
		{
			case 1:
				node *temp;
				temp=createnode();
				node *h;
				h=root;
				root=insert(temp,h);
				break;
			case 2:
				int data;
				printf("\n\t\tEnter the data you want to delete:- ");
				scanf("%d",&data);
				root=deleteNode(root,data);
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
				}
				break;
			default:
				printf("\n\t\tPlease put a valid choice\n");
				break;
		}
	}
}
