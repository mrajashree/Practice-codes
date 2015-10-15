#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;
int m = 100000000;
int prev_m;

typedef struct stack
{
	int data;
	int mini;
	struct stack *next;
}STACK;

STACK *top=NULL;

void push(int data)
{
	STACK *temp = (STACK*)malloc(sizeof(STACK));
	temp->data = data;
	temp->next = NULL;
	temp->mini = temp->data;
	
	if(top==NULL)
	{
		top = temp;
	}

	else
	{
		temp->next = top;
		if(temp->data < top->mini)
		{
			top->mini = temp->data;
		}
			
			
		top = temp;
	}
	cout<<"data added : "<<top->data<<endl;
	
}

int pop()
{
	int val;
	STACK *top1;
	
	if(top==NULL)
	{
		cout<<"Stack empty";
		return 0;
	}
	
	top1 = top;
	val = top->data;
	top = top->next;
	free(top1);
	
//	cout<<"data popped : "<<val<<endl;
	return val;
}

int min()
{
	return top->mini;
}

int main()
{
	int res;
	push(6);
	push(5);
	push(12);
	push(3);
	pop();
	pop();
	
	res = min();
	
	cout<<"least ele in stack is : "<<res;
	return 0;
}
	
	
	
	
	
	
	
	
	
	

