#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void replace_spaces(char *s, int len)
{
	int i,space_cnt=0,new_len;
	for(i=0;i<len;i++)
		if(s[i]== ' ')
			space_cnt++;
	new_len = len + 2*space_cnt;
	s[new_len] = '\0';
	for(i = len-1;i >= 0; i--)
	{
		if(s[i] == ' ')
		{
			s[new_len - 1] = '0';
			s[new_len - 2] = '2';
			s[new_len - 3] = '%';
			new_len-=3;
		}
		else
		{
			s[new_len - 1] = s[i];
			new_len-=1;
		}
	}
	printf("New string : %s\n", s);
}

int main()
{
	char s[25] = "string with spac es";
	
	replace_spaces(s,strlen(s)+1);
	
}