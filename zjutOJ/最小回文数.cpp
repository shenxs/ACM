#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
void function(string s)
{
	if(s[0]=='-')
	{
		cout<<0<<endl;
		return;
	}
	for (int i=0;i<s.length();i++)
	{
		if (s[i]!='9') break;
		if (i==s.length()-1)
		{
			cout<<1;
			for (int j=0;j<s.length()-1;j++) cout<<0;
			cout<<1<<"\n";
			return;
		}
	}
	if (s.length()==1)
	{
		if (s[0]=='9') cout<<11<<endl;
		else 
		{s[0]++;
		cout<<s<<endl;}
		return;
	}
	if (s.length()==2)
	{
		if (s[0]>s[1]) 
		{
			s[1]=s[0];
			cout<<s<<endl;
			return;
		}
		if (s[0]<s[1])
		{
			s[0]++;
			s[1]=s[0];
			cout<<s<<endl;
			return;
		}
		s[0]++;
		s[1]++;
		cout<<s<<endl;
		return;
	}
	string s1=s;
	int l,r;
	bool f=false;
	if (s.length()%2)
	{
		l=r=s.length()/2;
		while (l>=0)
		{
			if (s[l]!=s[r])
			{
				if (s[l]>s[r])
				{
					s[r]=s[l];
					l--;
					r++;
					while (l>=0)
					{
						if (s[l]!=s[r])
						{
							s[r]=s[l];
						}
						l--;
						r++;
					}
				}
				else 
				{
					
					l=r=s.length()/2;
					while (s[l]=='9') 
					{
						l--;
						r++;
					}
					s[l]++;
					s[r]=s[l];
					for (int teml=s.length()/2,temr=s.length()/2;teml>l;teml--,temr++)
					{
						s[teml]=s[temr]='0';
					}
					l--;
					r++;
					while (l>=0)
					{
						if (s[l]!=s[r])
						{
							s[r]=s[l];
						}
						l--;
						r++;
					}
				}
			}
			r++;
			l--;
		}
	}
	else 
	{
		l=s.length()/2-1;
		r=s.length()/2;
		while (l>=0)
		{
			if (s[l]!=s[r])
			{
				if (s[l]>s[r])
				{
					s[r]=s[l];
					l--;
					r++;
					while (l>=0)
					{
						if (s[l]!=s[r])
						{
							s[r]=s[l];
						}
						l--;
						r++;
					}
				}
				else 
				{
					l=s.length()/2-1;
					r=s.length()/2;
					while (s[l]=='9') 
					{
						l--;
						r++;
					}
					s[l]++;
					s[r]=s[l];
					for (int teml=s.length()/2-1,temr=s.length()/2;teml>l;teml--,temr++)
					{
						s[teml]=s[temr]='0';
					}
					l--;
					r++;
					while (l>=0)
					{
						if (s[l]!=s[r])
						{
							s[r]=s[l];
						}
						l--;
						r++;
					}
				}
			}
			r++;
			l--;
		}
	}
	if (s==s1)
	{
		if (s.length()%2)
		{
			l=r=s.length()/2;
			while (s[l]=='9') 
			{
				l--;
				r++;
			}
			s[l]++;
			if (l!=r)s[r]++;
		}
		else 
		{
			l=s.length()/2-1;
			r=s.length()/2;
			while (s[l]=='9') 
			{
				l--;
				r++;
			}
			s[l]++;
			s[r]++;
			
		}
	}
	cout<<s<<endl;
	return;
}
int main()
{
	string n;
	while (cin>>n)
	{
		function(n);
	}
	return 0;
}