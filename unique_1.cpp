#include <iostream>
#include <string.h>
using namespace std;

bool unique(string str)
{
	bool char_set[256];
	int len = str.length();
		
	if(str.length()>256)
		return false;
		
	memset(char_set,'\0',256);
	for(int i=0;i<len;i++)
	{
		if(char_set[str[i]]==true)
			return false;
		char_set[str[i]]=true;
	}
		
	return true;
}

int main()
{
	bool res;
	string str = "uniqe?";
	res = unique(str);
	if(res==1)
		cout<<"Unique";
	else
		cout<<"Not";
		
	return 0;
}




