#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *head,*temp;//for linked list

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

NODE* mth_to_last(int m)
{
	int i = 0;
	NODE* curr = (NODE*)malloc(sizeof(NODE));
	temp = head->next;
	curr = temp;
	while(i!=m)
	{
		if(temp==NULL || temp->next==NULL)
			return NULL;
		temp=temp->next;
		i++;
	}

	while(temp->next!=NULL)
	{
		temp = temp->next;
		curr = curr->next;
	}
	return curr;
}

int main()
{
	head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;

	NODE *mtolast;
	int m;
	
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	printf("Enter m : ");
	scanf("%d",&m);
	printf("m is : %d\n", m);
	mtolast = mth_to_last(m);
	if(mtolast==NULL)
		printf("Invalid m\n");
	else
		printf("mth to last element is : %d\n", mtolast->data);
}