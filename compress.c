#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

/*void string_compress(char *str)
{
	char comp_str[50];
	char curr;
	int i,j =0,count = 0;

	for(i=0;i<strlen(str);i++)
	{
		curr = str[i];
		while(str[i] ==curr)
		{
			i++;
			count++;
		}
		comp_str[j++] = curr;
		comp_str[j++] = (char)(count + '0');
		count = 1;
	}
	comp_str[j] = '\0';
	printf("The compressed string is : %s\n", comp_str);
}*/

void string_compress(char *str)
{
	char comp_str[50];
	char curr;
	int i,j =0,count = 0;

	for(i=0;i<strlen(str);i++)
	{
		curr = str[i];
		while(str[i] ==curr)
		{
			i++;
			count++;
		}
		comp_str[j++] = curr;
		comp_str[j++] = (char)(count + '0');
		count = 1;
	}
	comp_str[j] = '\0';
	printf("The compressed string is : %s\n", comp_str);
}

int main()
{
	char *str;
	size_t bytes = 10;
	printf("Enter string : ");
	str = malloc(bytes+1);
	getline(&str,&bytes,stdin);
	string_compress(str);
	
}