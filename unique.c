#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int is_unique(char *str)
{
	bool arr[256];
	int i,val;
	if(strlen(str) > 256)
		return 0;

	memset(arr, false, sizeof(arr));
	for(i = 0; i < strlen(str); i++)
	{
		val = str[i];
		if(arr[val] == true)
			return 0;
		arr[val] = true;
	}
	return 1;
}

int main()
{
	char *str;
	int res;
	size_t bytes = 10;
	printf("Enter string : ");
	str = malloc(bytes+1);
	getline(&str,&bytes,stdin);
	printf("str is : %s\n", str);
	res = is_unique(str);
	if(res > 0)
		printf("String is unique");
	else
		printf("String is not unique");
}
