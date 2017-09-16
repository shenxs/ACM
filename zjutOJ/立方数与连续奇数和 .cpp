#include<iostream>
using namespace std;
int main()
{
	int a[100];
	for (int n;cin>>n;)
	{
		int t=n*n,i;
		if (n%2!=0)
		{
			a[n/2+1]=t;
			for (i=n/2;i>0;i--)a[i]=a[i+1]-2;
			for(i=n/2+2;i<=n;i++)a[i]=a[i-1]+2;
			for(i=1;i<n;i++)cout<<a[i]<<"+";
			cout<<a[n]<<endl;
		}
		else 
		{
			a[n/2]=t-1;
			for (i=n/2-1;i>0;i--)a[i]=a[i+1]-2;
			for(i=n/2+1;i<=n;i++)a[i]=a[i-1]+2;
			for(i=1;i<n;i++)cout<<a[i]<<"+";
			cout<<a[n]<<endl;

		}

	}
	return 0;
}