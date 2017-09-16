#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin>>n)
	{
		int t=1,s=0;
		for (int i=1;i<=n;i++)
		{
			t=t*i;
			s=s+t;
		}
		cout<<s<<endl;
	}
	return 0;
}