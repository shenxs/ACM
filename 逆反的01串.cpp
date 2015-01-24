#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin>>s)
	{
		int i=0;
		for (i=0;i<s.length();i++)
		{
			if (s[i]=='1') s[i]='0';
			else s[i]='1';
		}
		cout<<s<<endl;
	}
	return 0;
}