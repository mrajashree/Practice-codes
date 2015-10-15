#include<stdio.h>

void checkStack(int *);

int main()
{
	int i=0;
	checkStack(&i);
	return 0;
}

void checkStack(int *j)
{
	int k=0;
	printf("Address of i in main : %u\n",j);
	printf("Address of k : %u\n",&k);
	if(&k>j)
		printf("Stack is growing up\n");
	else
		printf("Stack is growing downwards\n");
	
}
