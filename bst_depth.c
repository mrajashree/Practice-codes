#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}tree;

tree *root =NULL, *temp;

int maxdepth(tree *node)
{
	int ldepth, rdepth;
	if(node==NULL)
		return 0;

	else
	{
		ldepth = maxdepth(node->left);
		rdepth = maxdepth(node->right);

		if(ldepth > rdepth)
			return (ldepth+1);
		return (rdepth+1);
	}
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
	root->left->right = insert(5);
	//root->right->right->right = insert(6);
	res = maxdepth(root);
	
	printf("height is : %d",res);

	return 0;
}