#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
bool hax(string s)
{
	for (int i=0;i<s.length()/2;i++)
	{
		if (s[i]!=s[s.length()-i-1]) return false;
	}
	return true;
}
bool comp(string a,string b)
{
	return a.length()<b.length();
}
int main()
{
	string s[100];
	string str;
	int n=1;
	while (getline(cin,str))
	{
		if (hax(str))
		{
			s[n++]=str;
		}
	}
	sort(s+1,s+n,comp);
	for (int i=1;i<n;i++)
	{
		cout<<s[i]<<"\n";
	}
	return 0;
}