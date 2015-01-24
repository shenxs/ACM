#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin>>n&&n!=-1)
	{
		if (n==0)
		{
			cout<<1<<endl;
			continue;
		}
		int i;
		cout<<5;
		for (i=0;i<n-1;i++)cout<<0;
		cout<<5;
		for (i=0;i<n-1;i++)	cout<<0;
		cout<<endl;

	}
	return 0;
}