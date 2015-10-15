#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *next;
}STACK;

STACK *top1 = NULL, *top2 = NULL;

void push(STACK **top, int ele)
{
	STACK *curr = (STACK*)malloc(sizeof(STACK));
	curr->data = ele;

	if(*top==NULL) //stack empty
	{
		*top = curr;
		(*top)->next = NULL;
		return;
	}
	
	curr->next = *top;
	*top = curr;
}

int pop(STACK **top)
{
	int ele;
	STACK * temp1 = *top;

	if(*top==NULL) //stack empty
	{
		printf("underflow\n");
		return -1;
	}
	ele = (*top)->data;
	top = (*top)->next;
	free(temp1);
	return ele;
}

void sort_stack()
{
	int data;
	if(top2==NULL)
	{
		while(top1!=NULL)
		{
			data = pop(&top1);
			while((*top2)->data > data)
			{
				push(&top1,pop(&top2));
			}
			push(&top2,data);
		}
	}
}

int main()
{
	push(top1,5);
	push(top1,3);
	push(top1,13);
	push(top1,1);
	sort_stack();
}