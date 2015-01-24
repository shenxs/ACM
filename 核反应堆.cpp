#include<iostream>
using namespace std;
int main()
{
	_int64 g,d,a,b;
	int n;
	for(;cin>>n && n!=-1;)
	{
		g=1;
		d=0;
		for(;n--;)
		{
			a=3*g+2*d;
			b=g+d;
			g=a;
			d=b;
		}
		printf("%I64d",g);
		cout<<", ";
		printf("%I64d",d);
		cout<<endl;
	}
	return 0;
}