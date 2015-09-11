#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define min(a,b) ((a) < (b) ? (a) : (b))

int gcd(int n1, int n2)
{
	int i;
	for(i = min(n1,n2); i>=1; i--)
	{
		if(n1%i==0 && n2%i==0)
			return i;
	}
	return 0;
}

int main()
{
	int num1, num2, res;
	printf("Enter the two numbers: ");
	scanf("%d",&num1);
	scanf("%d",&num2);
	res = gcd(num1,num2);
	printf("GCD : %d\n", res);
}