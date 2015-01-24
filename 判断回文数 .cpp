#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	while (cin>>s1)
	{
		if (s1=="0") break;
		s2="";
		for (int i=0;i<s1.length();i++)
		{
			s2=s1[i]+s2;
		}
		if (s1==s2) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
} 
