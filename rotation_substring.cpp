#include<string.h>
#include<iostream>

using namespace std;

int main()
{
	string s1,s2,s1s1;
	cout<<"Enter s1 : ";
	cin>>s1;
	cout<<"Enter s2 : ";
	cin>>s2;
	
	s1s1 = s1+s1;
	
	if(s1s1.find(s2)!=string::npos)
		cout<<"Yes rotation"<<endl;
	else
		cout<<"No";	
}
