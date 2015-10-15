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

void flatten()
{
	NODE *temp = head;
	while(temp->next!=NULL)
	{
		if(temp->child==NULL)
			temp = temp->next;
		else
			append(temp->child);
	}
}

void append(NODE *curr)
{
	NODE *temp = curr;
	tail->next = curr;
	curr->prev = tail;
	while(temp->next!=NULL)
	{
		if(temp->child==NULL)
			temp = temp->next;
		else
			append(temp->child);
	}
	tail = temp;
}