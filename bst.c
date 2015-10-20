#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}tree;

tree * prev = NULL;

int is_bst(tree *temp)
{
	if(temp)
	{
		if(!is_bst(temp->left))
			return 0;
		if(prev!=NULL && temp->data <= prev->data)
			return 0;

		prev = temp;
		return is_bst(temp->right);
	}
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
	tree *root,*root1,*root2;
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

	root1 = insert(40);
	root1->left = insert(20);
	root1->right = insert(60);
	root1->left->left = insert(10);
	root1->left->right = insert(30);
	root1->right->right = insert(80);
	root1->right->right->right = insert(90);	

	res = is_bst(root1);
	if(res)
		printf("Bst\n");
	else
		printf("Not bst\n");

	root2 = insert(50);
	root2->left = insert(20);
	root2->right = insert(30);
	root2->left->left = insert(70);
	root2->left->right = insert(80);
	root2->left->left->right = insert(40);
	root2->left->left->left = insert(90);

	res = is_bst(root2);
	if(res)
		printf("Bst\n");
	else
		printf("Not bst\n");

	return 0;
}