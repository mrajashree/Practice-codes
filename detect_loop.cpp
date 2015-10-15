#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *head;

void add(int data)
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
	NODE *current,*runner,*tmp,*slow,*fast;
	head = NULL;
	
	tmp = (NODE*)malloc(sizeof(NODE));
	
	add(1);
	add(2);
	add(2);
	add(3);
	add(4);
	
	tmp->data = 5;
	tmp->next = NULL;
	
	current=head;
	while(current->next!=NULL)
	{
		current=current->next;
	}
	current->next = tmp;
	
	current=head;
	current = current->next;
	current = current->next;
	tmp->next = current;
	
	slow = head;
	fast = head;
	while(fast!=NULL && fast->next!=NULL)	
	{
		slow = slow->next;
		fast = fast->next->next;
		
		if(slow==fast || fast->next==slow)
			break;		//collision
			
		if(fast==NULL || fast->next==NULL)
		{
			cout<<"No cycle";
			return 0;
		}
	}
	
	slow = head;
	int cnt = 0;
	while(slow!=fast)
	{
		slow = slow->next;
		fast = fast->next;
		cnt++;
	}
	
	cout<<"Loop start is at "<<cnt<<" position";
	
	
	return 0;
}
		
		
		
		
		
		
			
	
	
