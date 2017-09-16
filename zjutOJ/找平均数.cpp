#include<iostream>
using namespace std;
int a[5000];
int main()
{
	cout.precision(2);
	cout<<fixed;
	int n,sum;
	double tem,k;
	int tem1;
	while (cin>>n&&n)
	{
		sum=0;
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		k=1<<30;
		for (int i=1;i<=n;i++)
		{
			if (a[i]>k) continue;
			tem=(sum-a[i])*1.0/(n-1);
			tem1=tem;
			if (a[i]==tem1) k=tem;
		}
		cout<<k<<endl;
		
		
		
	}
	return 0;
}
