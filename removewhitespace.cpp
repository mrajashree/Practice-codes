#include<string.h>
#include<algorithm>
#include<iostream>

using namespace std;

void remove(char* str);

int main()
{
    char str[] = "What the hell";
	cout<<"Str : "<<str<<endl;
    
    remove(str);
    
    cout<<"New string is : "<<str<<endl;
    
    return 0;
}

void remove(char* str)
{
	char *src,*dst;
	src = str;
	dst = src;
	
	while(*src!='\0')
	{
		if(*src!=' ')
		{
			*dst++ = *src;
		}
		*src++;
	}
	*dst = '\0';
}
