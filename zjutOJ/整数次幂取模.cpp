#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while (cin>>a>>b>>c)
	{
		a=a%c;
		int t=a;
		int k=1;
		while (b!=0)
		{
			if (b%2!=0) k=k*a%c;
			b=b/2;
			a=a*a%c;
		}
		cout<<k<<endl;
	}
	return 0;
}
