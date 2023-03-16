#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}node;

node *create()
{
	node *p;
	int num;
	printf("enter the data (enter 0 to exit):");
	scanf("%d",&num);
	
	if(num==0)
		return NULL;
	
	p=(node*)malloc(sizeof(node));
	p->data=num;
	printf("enter the left child of %d: \n",num);
	p->left=create();
	printf("enter the right child of %d: \n",num);
	p->right=create();
	return p;
}

void preorder(node *t)
{
	if(t!=NULL)
	{
		printf("%d\t",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}
void inorder(node *t)
{
	if(t!=NULL)
	{
		inorder(t->left);
		printf("%d\t",t->data);
		inorder(t->right);
	}
}
void postorder(node *t)
{
	if(t!=NULL)
	{
		postorder(t->left);
		postorder(t->right);
		printf("%d\t",t->data);
	}
}
int main()
{
	node *root;
	root=create();
	printf("\n The preorder tree is :");
	preorder(root);
	printf("\n The inorder tree is :");
	inorder(root);
	printf("\n The postorder tree is :");
	postorder(root);
}