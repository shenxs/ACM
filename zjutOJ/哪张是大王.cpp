#include<iostream>
using namespace std;
int main()
{
	int a[1000]={1},i;
	for (i=1;i<31;i++) 
	{
		a[i]=2*a[i-1];
		//cout<<a[i]<<endl;
	}
	for (int n;cin>>n&&n!=0;)
	{
		for (i=30;i>=0;i--)
		{
			if (a[i]<=n)
			{
				cout<<a[i]<<endl;
				break;
			}
		}
	}


	return 0;
}