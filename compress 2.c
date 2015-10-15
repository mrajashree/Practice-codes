#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i,j,count,k,l;
	char *str = malloc(1024);
	char curr,cnt[100];
	char new_str[100];
		
	printf("Enter string : ");
	gets(str);
	
	i=0;j=0,k=0;
	while(str[i]!='\0')
	{
		curr = str[i];
		count = 0;
		while(str[i]==curr)
		{
			i++;
			count++;
		}
		new_str[j]=str[i-1];
		j++;
		new_str[j] = (char)(count+'0');
		j++;
	}
	new_str[j]='\0';
	cnt[k]='\0';
	
	printf("Compressed string is : ");
	for(l=0;l<j;l++)
	{
		printf("%c",new_str[l]);
	}
	
	return 0;
}
