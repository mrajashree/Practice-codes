#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void non_repeat(char *s)
{
	int char_set[256];
	int i,len,val;
	memset(char_set,0,256);
	len = strlen(s);
	for(i=0;i<len;i++)
	{
		val = s[i];
		char_set[val]++;
	}
	for(i = 0; i < len; i++)
	{
		if(char_set[s[i]]==1)
		{
			printf("First non repeating char is : %c\n", s[i]);
			return;
		}
	}
	printf("No non repeating char\n");
}

int main()
{
	char str[] = "geeksforgeeks";
	non_repeat(str);
}