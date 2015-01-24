#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c,tem;
	for (int num=1;num<=n;num++)
	{
		cin>>a>>b>>c;
		if (a>b) 
		{
			tem=a;
			a=b;
			b=tem;
		}
		if (b>c)
		{
			tem=b;
			b=c;
			c=tem;
		}
		if (a>b)
		{
			tem=a;
			a=b;
			b=tem;
		}
		if (a+b>c) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
