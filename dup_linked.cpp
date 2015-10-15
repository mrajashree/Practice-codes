#include<string.h>
#include<stdlib.h>
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
	NODE *current,*runner;
	head = NULL;
	
	add(1);
	add(2);
	add(2);
	add(1);
	add(3);
	
	current = head;	
	
	cout<<"Original list is : ";
	while(current->next!=NULL)
	{
		cout<<current->data<<" ";
		current = current->next;
	}
	cout<<current->data;	
	cout<<endl;
	
	current = head;
	
	while(current->next!=NULL)	
	{
		runner = current;
		while(runner->next!=NULL)
		{
			if(runner->next->data == current->data)
				runner->next = runner->next->next;
			else
				runner = runner->next;
		}
		current = current->next;
	}
	
	cout<<"New list : ";
	runner = head;
	while(runner->next!=NULL)
	{
		cout<<runner->data<<" ";
		runner = runner->next;
	}
	cout<<runner->data;
	
	
}
