#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	char c;
	int a[27]={0};
	while (getline(cin,s))
	{
		for (int i=0;i<s.length();i++)
		{
			if (s[i]>='A'&&s[i]<='Z') a[s[i]-64]++;
		}
	}
	int k=a[1];
	for (int i=1;i<=26;i++)
	{
		if (k<a[i]) k=a[i];
	}
//	cout<<k;
	for (;k>0;k--)
	{
		for (int i=1;i<=26;i++)
		{
			if (i!=1) cout<<" ";
			if (a[i]==k) 
			{
				cout<<"*";
				a[i]--;
			}
			else cout<<" ";
		}
		cout<<endl;
	}
	for (int i=1;i<=26;i++)
	{
		if (i!=1) cout<<" ";
		c=i+64;
		cout<<c;
	}
	cout<<endl;
	return 0;
}
