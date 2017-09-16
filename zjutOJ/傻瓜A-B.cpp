#include <iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n,lon;
	string a,b,tem;
	int c[300]={0};
	cin>>n;
	for (int num=1;num<=n;num++)
	{
		for (int i=0;i<300;i++) c[i]=0;
		cin>>a>>b;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
//		cout<<a<<" "<<b<<endl;
		if (a.length()>=b.length()) 
		{
		    lon=b.length();
		    tem=a;
		}
		else 
		{
		    lon=a.length();
			tem=b;
		}
		for (int i=0;i<lon;i++)
		{
			c[i]=abs(a[i]-b[i]);
		}
		for (int i=lon;i<tem.length();i++)
		{
			c[i]+=tem[i]-48;
		}
		for (int i=299;i>=0;i--)
		{
			if (c[i]!=0)
			{
				for (i;i>=0;i--)
				{
					cout<<c[i];
				}
			}
			if (i==0)cout<<0;
		}			
		cout<<endl;
	}
	return 0;
}
