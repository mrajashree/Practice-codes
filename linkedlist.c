#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *head,*temp;//for linked list
NODE *front=NULL, *rear = NULL;//for queue
NODE *top=NULL;//for stack;

void insert(int ele)
{
	NODE *curr = (NODE*)malloc(sizeof(NODE));
	curr->data = ele;
	curr->next = NULL;

	if(head->next==NULL)
		head->next = curr;

	else
	{
		temp = head;
		while(temp->next!=NULL)
			temp = temp->next;
		temp->next = curr;
	}
}

int del(NODE *del_node) //can't be last node, be careful if yes
{
	if(head->next==NULL)
		return 0;
	temp = head;
	while(temp->next!=NULL)
	{
		if(temp->next==del_node)
		{
			temp->next = temp->next->next;
			free(temp->next);
			return 1;
		}
		temp = temp->next;
	}
	return 0;
}

void enqueue(int ele)
{
	NODE *curr = (NODE*)malloc(sizeof(NODE));
	curr->data = ele;
	curr->next = NULL;
	if(front==NULL && rear==NULL) //Queue empty
	{
		rear = curr;
		front = rear;
		return;
	}
	
	rear->next = curr;
	rear = rear->next;
}

int dequeue()
{
	int ele;
	NODE *temp1 = front;
	if(front==NULL && rear==NULL)
	{
		printf("Queue underflow\n");
		return -1;
	}
	if(front==rear)
	{
		front = rear = NULL;
		return -1;
	}
	ele = front->data;
	front = front->next;
	free(temp1);
	return ele;
}

void push(int ele)
{
	NODE *curr = (NODE*)malloc(sizeof(NODE));
	curr->data = ele;

	if(top==NULL) //stack empty
	{
		top = curr;
		top->next = NULL;
		return;
	}
	
	curr->next = top;
	top = curr;
}

int pop()
{
	int ele;
	NODE * temp1 = top;

	if(top==NULL) //stack empty
	{
		printf("underflow\n");
		return -1;
	}
	ele = top->data;
	top = top->next;
	free(temp1);
	return ele;
}

void display()
{
	temp = head->next;
	while(temp!=NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

void display_queue()
{
	temp = front;
	while(temp!=NULL)
	{
		printf("%d\n", temp->data);
		temp=temp->next;
	}
}

void display_stack()
{
	temp = top;
	while(temp!=NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

int main()
{
	head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;
	/*insert(1);
	insert(2);
	display();
	del(head->next);
	display();*/
	/*enqueue(12);
	enqueue(23);
	enqueue(34);
	display_queue();
	dequeue();
	dequeue();
	dequeue();
	display_queue();
	enqueue(45);
	display_queue();*/
	push(10);
	push(20);
	display_stack();
	push(30);
	display_stack();
	pop();
	pop();
	pop();
	push(40);
	display_stack();
}



