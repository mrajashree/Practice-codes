#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int i=0;
	string str = "abcdefghijklmnopqrstuvwxyz";
	cout<<str<<endl;
	for(i=0;i<26;i++)
		str[i] = str[(i+13)%26];
	cout<<"New string : "<<str;
	
	return 0;
}

