#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	int a1[] = {1,2,3,4,5},i;
	int size = sizeof(a1)/sizeof(int);
	int b1[size];
	memcpy(b1,a1,size*sizeof(int));
	for(i=0;i<size;i++)
		printf("%d ", b1[i]);
	return 0;
}