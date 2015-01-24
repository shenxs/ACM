#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string s;
	int sum[500]={0};
	while(cin>>n&&n!=0)
	{
		for (int i=0;i<500;i++) sum[i]=0;
		for (int num=1;num<=n;num++)
		{
			cin>>s;
			if (s[0]!='-')
			{
				int k=0;
				for(int i=s.length()-1;i>=0;i--)
				{
					sum[k]+=s[i]-48;
					k++;
				}
			}
			else 
			{
				int k=0;
				for (int i=s.length()-1;i>=1;i--)
				{
					sum[k]-=s[i]-48;
					k++;
				}
			}
		}
		for(int i=0;i<499;i++)
		{
			sum[i+1]+=sum[i]/10;
			sum[i]=sum[i]%10;
		}
		int tem;
		for (tem=499;tem>=0;tem--)
		{
			if (sum[tem]!=0) break;
		}
		if (sum[tem]<0)
		{
			cout<<"-";
			for (int i=0;i<=tem;i++)
			{
				sum[i]=-sum[i];
			}
		}
		for (int i=0;i<tem;i++)
		{
			if (sum[i]<0) 
			{
				sum[i]+=10;
				sum[i+1]-=1;
			}
		}
		for(int i=499;i>=0;i--)
		{
			if (sum[i]!=0)
			{
				for (i;i>=0;i--)
				{
					cout<<sum[i];
				}
			}
			if (i==0) cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
