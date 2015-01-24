#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int a[1000];
	int sum1;
	int sum2;
	while (cin>>n>>m)
	{

		int i,tem,num,k;
		for (i=0;i<n;i++)cin>>a[i];
		for (i=0;i<n-1;i++)
		{
			for (k=n-2;k>=i;k--) 
				if (a[k]>a[k+1])
				{
					tem=a[k];
					a[k]=a[k+1];
					a[k+1]=tem;
				}
		}
		if (a[0]>m) 
		{
			cout<<0<<" "<<0<<endl;
			continue;
		}
		sum1=a[0];
		sum2=a[0];

		for (i=1;i<n;i++) 
		{
			sum1+=a[i];
			if (sum1>m)break;
			sum2+=sum1;
		}
		cout<<i<<" "<<sum2<<endl;
	}
	return 0;
}