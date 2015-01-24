#include<iostream>
using namespace std;
int main()
{
	int n,m,tem;
	while (cin>>n>>m)
	{
		if (n>m)
		{
			tem=n;
			n=m;
			m=tem;
		}
		while (n!=0)
		{
			tem=m%n;
			m=n;
			n=tem;
		}
		cout<<m<<endl;
	}
	return 0;
}