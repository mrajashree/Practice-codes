#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int asc_int(char *str)
{
	int i=0, num = 0,neg_flag = 0;
	if(str[0]=='-')
		neg_flag = 1;
	while(i < strlen(str)-1)
	{
		num*=10;
		num+=(int)(str[i] - '0');
		i++;
	}

	if(neg_flag)
		num = 0-num;
	return num;
}

int main()
{
	char *str;
	int val;
	size_t bytes = 1;
	str = malloc(bytes);
	printf("Enter ascii : ");
	getline(&str,&bytes,stdin);
	val = asc_int(str);	
	printf("number : %d\n", val);
}