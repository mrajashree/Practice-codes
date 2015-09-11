#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max(int a, int b)
{
	int c = a - b, d, max, min;
	d = (c>>31) & 1;
	max = a - d * c;
	min = b + d * c;
	return max;
}

int main()
{
	int num1, num2, res;
	printf("Enter the two numbers: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	res = max(num1,num2);
	printf("Max : %d\n", res);

}