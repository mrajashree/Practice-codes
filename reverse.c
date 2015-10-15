#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void reverse(char *str)
{
	char *end = str;
	char tmp;
	if(str)
	{
		while(*end)
			++end;

		--end;

		while(str < end)
		{
			tmp = *str;
			*str++ = *end;
			*end-- = tmp;
		}
	}
}

void rev(char *str)
{
	char *end = str;
	if(str)
	{
		while(*end)
			end++;
		end--;

		while(str < end)
		{
			tmp = *str;
			*str++ = *end;
			*end-- = tmp;
		}
	}
} 

int main()
{
	char *str;
	size_t bytes = 10;
	printf("Enter string : ");
	str = malloc(bytes+1);
	getline(&str,&bytes,stdin);
	printf("str is : %s\n", str);
	reverse(str);
	printf("Reversed string is : %s\n", str);
}