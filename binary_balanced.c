#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}tree;

tree *root = NULL;

int max(int a, int b)
{
	return (a >= b) ? a : b;
}

int height(tree *temp)
{
	if(temp==NULL)
		return 0;
	return 1 + max(height(temp->left), height(temp->right));
}

int is_balanced(tree *temp)
{
	int lh,rh;
	if(temp==NULL)
		return 1;
	lh = height(temp->left);
	rh = height(temp->right);
	if( (abs(lh-rh) <=1 ))
	{
		if(is_balanced(temp->left) && is_balanced(temp->right))
			return 1;
	}
	
	return 0;
}

tree *insert(int data)
{
	tree *temp = (tree*)malloc(sizeof(tree));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	return(temp);
}

int main()
{
	int res; 
	root = insert(1);
	root->left = insert(2);
	root->right = insert(3);
	root->left->left = insert(4);
	root->right->right = insert(5);
	root->right->right->right = insert(6);
	res = is_balanced(root);
	if(res)
		printf("Balanced\n");
	else
		printf("Not Balanced\n");
}
