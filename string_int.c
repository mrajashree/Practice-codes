#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void str_int(char *s)
{
	int len = strlen(s), i, neg_flag=0, num = 0;
	i = 0;
	if(s[i]=='-')
	{
		neg_flag = 1;
		i++;
	}
	while(i<len)
	{
		num*=10;
		num+=(int)(s[i] - '0');
		i++;
	}
	if(neg_flag)
		num = 0-num;
	printf("Num is : %d\n", num);
}

int main()
{
	char s[] = "-732";
	str_int(s);
}