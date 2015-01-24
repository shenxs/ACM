#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	int tem;
	while (cin>>a>>b)
	{
		if (a==0&&b==0) break;
		c=sqrt(a*a+9*b*b);
		tem=c;
		if (c-tem>=0.5) cout<<tem+1<<endl;
		else cout<<tem<<endl;
	}
	return 0;
}
