#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void stock_buysell(int a[], int n)
{
	int i;
	while(i<n-1)
	{
		while(i<n-1 && a[i+1]<=a[i])	//lowest possible stock price till noe
			i++;

		if(i==n-1)
			break;

		stock[count].buy = i++;

		while(i<n-1 && a[i] >= a[i-1])		//least possible value
			i++;

		stock[count].sell = i-1;

		count++;
	}

	for(i=0;i,count;i++)
		printf("stock[i].buy,stock[i].sell\n");
}