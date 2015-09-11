#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

void is_substring(char *s1, char *s2)
{
	//char * new_s1 = malloc(2*sizeof(s1));
	//strcat(new_s1,s1);
	strcat(s1,s2);
	printf("Concatenate string : %s\n", s1);
	if(!strstr(s1,s2))
		printf("not a rotation");
	else
		printf("rotation");
}

int main(int argc, char const *argv[])
{
	char *s1, *s2;
	size_t bytes = 10;
	int res;

	s1 = malloc(100);
	s2 = malloc(100);
	printf("Enter s1 : ");
	scanf("%s",s1);
	printf("Enter s2 : ");
	scanf("%s",s2);
	is_substring(s1,s2);

	return 0;
}