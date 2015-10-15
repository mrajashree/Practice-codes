#include<stdlib.h>
#include<string.h>
#include<iostream>

using namespace std;

void reverse(char *str);

int main()
{
    char *str;
    str = (char*)malloc(1024);
    std::cout<<"Enter the string : ";
    gets(str);
      
    reverse(str);
    
    return 0;
}

void reverse(char *str)
{
    char *rev_str;
    char temp;
    int len,i,j;
    len = strlen(str)-1;
    /*rev_str = malloc(len*sizeof(char));
    j=0;
    for(i=len;i>=0;i--)
    {
        rev_str[j]=str[i];
        j++;
    }
	rev_str[j]='\0';
    printf("The reversed string is : %s\n",rev_str);*/
    
    /*i = 0;
    while(i<len)
    {
    	temp = str[i];
    	str[i] = str[len];
    	str[len] = temp;
    	i++;
    	len--;
	}*/
	
	char *start,*end,tmp;
	start = str;
	end = start;
	while(*end!='\0')
		end++;
	end--;
	
	while(*start<*end)
	{
		tmp = *start;
		*start++ = *end;
		*end++ = tmp;
	}
	
	std::cout<<"The reversed string is : "<<str<<std::endl;
}
    
    
    
    
    
    
    
    
    
    
    
    
