#include<iostream>
using namespace std;
int main()
{
	double n,m;
	cout.precision(3);
	while (cin>>n>>m)
	{
		double t=1,s=1;
		for (int i=1;i<=n;i++)
		{
			t=t*m;
			s=s+t;
		}
		cout<<fixed<<s<<endl;
	}
	return 0;
}