#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int arr[5] = {1,2,3,4,5};


typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
}tree;

tree *root;

tree *construct_bst(int arr[], int start, int end)
{
	int mid;

	if(end < start)
		return NULL;
	mid = (start+end)/2;	
	tree *temp = (tree*)malloc(sizeof(tree));
	temp->data = arr[mid];
	temp->left = construct_bst(arr,start,mid-1);
	temp->right = construct_bst(arr,mid+1,end);
	return temp;
}

void traverse(tree *temp)
{
	if(temp!=NULL)
	{
		printf("%d ", temp->data);
		traverse(temp->left);
		traverse(temp->right);
	}
}

int main()
{
	int i;

	root = construct_bst(arr,0,4);
	traverse(root);
}