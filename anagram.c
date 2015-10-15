#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int anagram(char *s1, char *s2)
{
	int i;
	int count[256];
	printf("String lenght of s1 : %ld\n", strlen(s1));
	if(strlen(s1)!=strlen(s2))
	{
		printf("blah\n");
		return 0;
	}
	memset(count,0,sizeof(count));
	for(i=0; i < strlen(s1); i++)
		count[s1[i]]++;
	for(i=0;i<strlen(s2);i++)
	{
		if(count[s2[i]]-1!=0)
			return 0;
	}

	return 1;
}

int main()
{
	char *s1, *s2;
	size_t bytes = 10;
	int res;

	s1 = malloc(bytes+1);
	s2 = malloc(bytes+1);
	printf("Enter s1 : ");
	getline(&s1,&bytes,stdin);
	printf("Enter s2 : ");
	getline(&s2,&bytes,stdin);
	res = anagram(s1,s2);
	if(!res)
		printf("Strings not anagram\n");
	else
		printf("Strings anagrams\n");
}



