#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	string s;
	int sum[300];
	while(cin>>n&&n!=0)
	{
		for (int i=0;i<300;i++) sum[i]=0;
		for (int num=1;num<=n;num++)
		{
			int k=0;
			cin>>s;
			for (int i=s.length()-1;i>=0;i--)
			{
				sum[k]+=s[i]-48;
				if (sum[k]>9) 
				{
					sum[k]-=10;
					sum[k+1]++;
				}
				k++;
			}
		}
		for (int i=299;i>=0;i--)
		{
			if (sum[i]!=0||i==0)
			{
				for (;i>=0;i--)
				{
					cout<<sum[i];
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
