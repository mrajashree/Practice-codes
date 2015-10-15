#include<string.h>
#include<algorithm>
#include<iostream>

using namespace std;

bool is_anagram(string s1,string s2)
{
	sort(s1.begin(),s1.end()); //or use bubble sort
	sort(s2.begin(),s2.end());
	if(s1==s2)
		return true;
	else
		return false;
}

int main()
{
	string s1,s2;
	bool res;
	int i;
	
	cout<<"Enter string s1 : ";
	cin>>s1;
	cout<<"Enter string s2 : ";
	cin>>s2;
	
	if(s1.length()!=s2.length())
	{
		cout<<"Not";
		return 0;
	}
	
	for(i=0;i<s1.length();i++)
	{
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}
	
	res = is_anagram(s1,s2);
	if(res==true)
		cout<<"Strings are anagrams"<<endl;
	else
		cout<<"Not";
}

