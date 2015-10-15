#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

typedef struct node
{
	char data;
	struct node *next;
}NODE;

NODE *head=NULL;

typedef struct stack
{
	char data;
	struct stack *next;
}STACK;

STACK *top=NULL;

void push(char data)
{
	STACK *temp = (STACK*)malloc(sizeof(STACK));
	temp->data = data;
	temp->next = NULL;
	
	if(top==NULL)
		top = temp;

	else
	{
		temp->next = top;
		top = temp;
	}
	cout<<"data added : "<<top->data<<endl;
}

char pop()
{
	char val;
	STACK *top1;
	
	if(top==NULL)
	{
		cout<<"Stack empty";
		return 0;
	}
	
	top1 = top;
	val = top->data;
	top1 = top1->next;
	free(top);
	top = top1;
	cout<<"data popped : "<<val<<endl;
	return val;
}

void add(char data)
{
	NODE *temp = (NODE*)malloc(sizeof(NODE));
	temp->data = data;
	temp->next = NULL;
	NODE *temp1;
	
	if(head==NULL)
		head = temp;
	else
	{
		temp1 = head;
		while(temp1->next!=NULL)
			temp1 = temp1->next;
		temp1->next = temp;
	}
}

int main()
{
	NODE *slow,*fast; //assuming list length not known, fast reaches end, slow reaches mid
	char val;
	add('r');
	add('a');
	add('a');
	add('d');
	add('a');
	add('a');
	add('r');
	
	slow = head;
	fast = head;
	while(fast->next!=NULL && fast!=NULL)
	{
		push(slow->data);
		slow = slow->next;
		fast = fast->next->next;
		
		if(fast==NULL or fast->next==NULL)
			break;
	}
	
	if(fast!=NULL)
		slow = slow->next; //fast not NULL, hence odd num of ele
	
	while(slow!=NULL)
	{
		val = pop();
		if(val!=slow->data)
		{
			printf("Not palindrome");
			return 0;
		}
		slow = slow->next;
	}
	cout<<"Yes palindrome";
}
