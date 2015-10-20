#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max_diff(int a[], int n)
{
	int max_difference = a[1] - a[0];
	int min = a[0];
	int i;

	for(i=1;i<n;i++)
	{
		if((a[i] - min) > max_difference)
			max_difference = a[i] - min;
		if(a[i] < min)
			min = a[i];
	}
	return max_difference;
}

int main()
{
	//int a[] = {2,3,10,6,4,8,1};
	int a[] = {7,9,5,6,3,2};
	int max_difference;
	max_difference = max_diff(a,6);
	printf("max_difference : %d\n", max_difference);
}