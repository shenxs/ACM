#include<iostream>
using namespace std;
int main()
{
	int n,i,s;
	char c;
	while (cin>>c>>n)
	{
		for (i=1;i<=n;i++)
		{
			for (s=n-i;s>=1;s--) cout<<" ";
			for (s=1;s<=2*i-1;s++) cout<<c;
			cout<<endl;
		}
	}
	return 0;
}