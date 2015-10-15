#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void int_str(int num)
{
	char s[10],temp;
	int neg_flag=0,i=0,j;
	if(num < 0)
		neg_flag = 1;
	while(num > 0)
	{
		s[i++] = (char)((num%10) + '0');
		num/=10;
	}
	if(neg_flag)
		s[i++] = '-';
	s[i] = '\0';
	i--;
	for(j=0;j<=i/2;j++)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
	}
	printf("string format: %s\n", s);
}

int main()
{
	int num = 7321468;
	int_str(num);
}



