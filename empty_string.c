#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char * createEmptyString(len)
{
	char *s;
	if(0>len)
		return NULL;
	s = malloc(len*sizeof(char));
	*s = '\0';
	return s;
}

int main()
{
	char *ret = createEmptyString(5);
	printf("ret : %s\n",ret);
}