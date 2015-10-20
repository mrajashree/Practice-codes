#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void int_str(int num)
{
	int i,neg_flag = 0,j;
	char ele, *str;
	str = malloc(sizeof(char));
	if(num < 0)
		neg_flag = 1;
	while(num > 0)
	{
		ele = (char)((num%10) + '0');
		num/=10;
		str[i++] = ele;
		str = realloc(str,sizeof(str)+sizeof(char));
	}
	str[i] = '\0';

	for(i = 0,j=strlen(str)-1;i<j;i++,j--)
	{
		str[i] = str[i] ^ str[j];
		str[j] = str[i] ^ str[j];
		str[i] = str[i] ^ str[j];
	}
	printf("string : %s\n", str);
}

int main()
{
	int num;
	char * str;
	printf("Enter number : ");
	scanf("%d",&num);
	int_str(num);
}