#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *next;
}stack;

//stack *top = NULL;

typedef struct q_node
{
	stack *top1;
	stack *top2;
}queue;

queue *q;

void push(stack **,int);
int pop(stack **);

void enqueue(int data)
{
	push(&q->top1,data);
}

int dequeue()
{
	int data;
	if(q->top1==NULL && q->top2==NULL)
	{
		return -1;
	}

	if(q->top2==NULL)
	{
		while(q->top1!=NULL)
		{
			data = pop(&q->top1);
			push(&q->top2,data);
		}
	}

	data = pop(&q->top2);
	return data;
}

void push(stack **top, int data)
{
	stack *curr = (stack*)malloc(sizeof(stack));
	curr->data = data;

	if(*top==NULL) //stack empty
	{
		*top = curr;
		(*top)->next = NULL;
		return;
	}
	
	curr->next = *top;
	*top = curr;
}

int pop(stack **top)
{
	int ele;
	stack * temp1 = *top;

	if(*top==NULL) //stack empty
	{
		printf("underflow\n");
		return -1;
	}
	ele = (*top)->data;
	*top = (*top)->next;
	free(temp1);
	return ele;
}

void display(stack *t1, stack *t2)
{
	while(t1!=NULL)
	{
		printf("%d\n", t1->data);
		t1 = t1->next;
	}
	while(t2!=NULL)
	{
		printf("%d\n", t2->data);
		t2 = t2->next;
	}
}

int main()
{
	q=(queue*)malloc(sizeof(queue));
q->top1 = NULL;
q->top2 = NULL;
enqueue(1);
enqueue(2);
enqueue(3);
display(q->top1,q->top2);
dequeue();
dequeue();
display(q->top1,q->top2);


}
