#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void remove_spaces(char *str)
{
	char *dst,*src;
	src = str;
	dst = src;
	while(*src)
	{
		if(*src!=' ')
		{
			*dst++ = *src;
		}
		*src++;
		printf("in str : %s",str);
	}
	*dst = '\0';
	printf("String final : %s\n", str);
}

int main()
{
	char *str;
	size_t bytes = 10;
	str = malloc(bytes);
	getline(&str,&bytes,stdin);
	printf("String original : %s",str);
	remove_spaces(str);
}