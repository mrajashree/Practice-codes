#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define num 256

void remove_spec(char *str, char *rem)
{
	char *src, *dst;
	int i,s_len,r_len;
	bool char_set[num];
	r_len = strlen(rem);

	memset(char_set,false,num);
	for (i = 0; i < r_len; i++)
	{
		char_set[rem[i]] = true;
	}

	src = str; dst = str;
	while(*src)
	{
		if(char_set[*src]==false)
			*dst++ = *src;
		*src++;
	}
	*dst = '\0';

	printf("New string : %s\n", str);
}

int main()
{
	char s[] = "Battle of the vowels: Hawaii Vs Gronzy";
	char r[] = "aeiou";
	remove_spec(s,r);
}
