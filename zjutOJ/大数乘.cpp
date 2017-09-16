#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a[500],b[500],c[500];
	string s1,s2;
	while (cin>>s1)
	{
		cin>>s2;
		if (s1=="0"&&s2=="0") break;
		if (s1=="0"||s2=="0") 
		{
			cout<<0<<endl;
			continue;
		}
		for (int i=0;i<500;i++) c[i]=0;
		bool f=true;
		if (s1[0]=='-') 
		{
			f-=1;
			s1=s1.substr(1,s1.length()-1);
		}
		if (s2[0]=='-') 
		{
			f-=1;
			s2=s2.substr(1,s2.length()-1);
		}
		if (f==false) cout<<"-";
		for (int i=0;i<s1.length();i++)
		{
			a[i]=s1[s1.length()-1-i]-48;
		}
		for (int i=0;i<s2.length();i++)
		{
			b[i]=s2[s2.length()-1-i]-48;
		}
		for (int i=0;i<s2.length();i++)
		{
			for (int k=0;k<s1.length();k++)
			{
				c[i+k]+=b[i]*a[k];
			}
		}
		for (int i=0;i<499;i++)
		{
			c[i+1]+=c[i]/10;
			c[i]=c[i]%10;
		}
		for (int i=499;i>=0;i--)
		{
			if(c[i]!=0)
			{
				for (;i>=0;i--)
				{
					cout<<c[i];
				}
			}
			
		}
		cout<<endl;
		
		
	}
	return 0;
}
