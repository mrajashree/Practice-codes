#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//0: 48, A: 65, a:97
int main()
{
	int number;
	char letter;
	printf("Enter char : ");
	scanf("%c",&letter);
	/*printf("Enter number : ");
	scanf("%d",&number);

	if(number>=0 && number<=25)
	{
		letter = (char)(number + 'A');
	}*/

	if(letter >= 'A' && letter <= 'Z')
	{
		number = (int)(letter - 'A')+1;
	}

	else if(letter >= 'a' && letter <= 'z')
	{
		number = (int)(letter - 'a') + 27;
	}

	else if(letter >= '0' && letter <= '9')
	{
		number = (int)(letter - '0') + 53;
	}
	
	printf("int is : %d\n",number);
}