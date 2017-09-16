#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
long long  a[32][32];
void pre()
{
	memset(a,0,sizeof(0));
	a[1][1]=1;
	double tem1,tem2;
	for (long long i=2;i<=31;i++)
	{
		a[i][0]=1;
		a[i][1]=i;
		for (long long j=2;j<=31;j++)
		{
			tem1=a[i][j-1];
			tem2=tem1*(i+1-j)/j;
			a[i][j]=(long long) (tem2);
		}
	}
}
int main()
{
	pre();
	long long t,d,b,c;
	long long sum,tem,tem2;
	cin>>t;
	while (t--)
	{
		cin>>d>>b>>c;
		sum=0;
		c-=2;
		for (long long i=1;i<=d;i++)
		{
			tem=0;
//			cout<<tem2<<endl;
			tem2=min(b,d-i);
			for (long long j=1;j<=tem2;j++)
			{
				tem+=a[d-i][j];
			}
//			cout<<tem<<endl;
			if (tem<=c) 
			{
				cout<<1;
				c-=tem;
				b--;
				c--;
			}
			else cout<<0;
		}
		cout<<endl;
	}
	return 0;
}