#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int a[500]={0};
	int n;
	while(cin>>n&&n!=0)
	{
		for (int i=0;i<500;i++) a[i]=0;
		for (int num=1;num<=n;num++)
		{
		    cin>>s;
			if (s[0]!='-')
			{
				int k=0;
				for(int i=s.length()-1;i>=0;i--)
				{
					a[k]+=s[i]-48;
					k++;
				}
			}
			else 
			{
				int k=0;
				for (int i=s.length()-1;i>=1;i--)
				{
					a[k]-=s[i]-48;
					k++;
				}
			}
		}
		for (int i=0;i<499;i++)
		{
			a[i+1]+=a[i]/10;
			a[i]=a[i]%10;
		}
		int tem;
		for (tem=499;tem>=0;tem--)
		{
			if (a[tem]!=0) break;
		}
		if (a[tem]<0)
		{
			cout<<"-";
			for (int i=0;i<=tem;i++)
			{
				a[i]=-a[i];
			}
		}
		for (int i=0;i<tem;i++)
		{
			if (a[i]<0) 
			{
				a[i]+=10;
				a[i+1]-=1;
			}
		}
		for(int i=499;i>=0;i--)
		{
			if (a[i]!=0)
			{
				for (i;i>=0;i--)
				{
					cout<<a[i];
				}
			}
			if (i==0) cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
