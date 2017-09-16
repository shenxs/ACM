#include<iostream>
#include<string>
using namespace std;
int min(int a,int b)
{
	if (a<b) return a;
	else return b;
}
int max(int a,int b)
{
	if (a>b) return a;
	else return b;
}
int main()
{
	string s;
	int a[100],n;
	while(getline(cin,s))
	{
		int num=0;
		n=0;
		for(int i=0;i<s.length();i++)
		{
			if (s[i]<'0'||s[i]>'9') continue;
			a[n]=s[i]-48;
			for (i=i+1;i<s.length();i++)
			{
				if (s[i]<='9'&&s[i]>='0') a[n]=a[n]*10+s[i]-48;
				else break; 
			}
			for (int k=0;k<n;k++)
			{
				if (max(a[k],a[n])%min(a[k],a[n])==0) continue;
				bool f=true;
				int t=min(a[n],a[k]);
				for (int tem=2;tem*tem<=t;tem++)
				{
					if (a[n]%tem==0&&a[k]%tem==0) 
					{
						f=false;
						break;
					}
				}
				if (f==true) num++;
			}
			n++;
		}
		cout<<num<<endl;
	}
	return 0;
}
