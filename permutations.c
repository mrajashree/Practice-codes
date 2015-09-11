#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void permute(char *s, int index)
{
	int i;

	if(index==(strlen(s)-1))
		printf("%s\n", s);
	else
	{
		for(i=index;i<strlen(s);i++)
		{
			swap((s+index), (s+i));
			permute(s,index+1);
			swap((s+index), (s+i));
		}
	}
}

int main()
{
	/*char *str; what problem????
	size_t bytes = 1;
	printf("Enter string : ");
	str = malloc(bytes+1);
	getline(&str,&bytes,stdin);*/
	//char str[] = "abc";
	char *str;
	str = malloc(5);
	printf("Enter string : ");
	scanf("%s",str);
    permute(str, 0);
    return 0;
}