#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
	struct node *child;
}NODE;

NODE *head, *tail;

void unflatten()
{
	NODE *temp = head;
	while(temp->next!=NULL)
	{
		if(temp->child==NULL)
			temp = temp->next;
		else
			separate(temp->child);
	}
}

void separate(NODE *curr)
{
	NODE *temp;
	curr->prev->next = NULL;
	curr->prev = NULL;
	temp = curr;

	while(temp->next!=NULL)
	{
		if(temp->child!=NULL)
			temp = temp->next;
		else
			separate(temp->child);
	}
	tail = temp;



}