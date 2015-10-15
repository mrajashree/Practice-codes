#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}tree;

tree *root =NULL;

int is_bst(tree *temp)
{
	printf("For node : %d\n", temp->data);
	if(temp==NULL)
	{
		printf("at least here\n");
		return 1;
	}

printf("here1\n");
	if(temp->left!=NULL && temp->left->data > temp->data)
		return 0;

	if(temp->right!=NULL && temp->right->data < temp->data)
		return 0;

	if(!is_bst(temp->left) || !is_bst(temp->right))
		return 0;
	
	return 1;
}

tree *insert(int data)
{
	tree *temp = (tree*)malloc(sizeof(tree));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;

	return(temp);
}

int main(int argc, char const *argv[])
{
	int res; 
	root = insert(3);
	root->left = insert(2);
	root->right = insert(4);
	root->left->left = insert(1);
	root->right->right = insert(5);
	//root->right->right->right = insert(6);
	res = is_bst(root);
	if(res)
		printf("Bst\n");
	else
		printf("Not bst\n");
	return 0;
}