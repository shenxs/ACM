#include<iostream>
using namespace std;
int main()
{
	int t,n,w,d,tem2;
	int a[1000];
	cin>>t;
	for (int tem=0;tem<t;tem++)
	{
		cin>>n;
		for (int i=1;i<=n;i++)
		{
			cin>>d>>w;
			a[i]=w-d;
		}
		for (int i=1;i<n;i++)
		{
			int tem=i;
			for (int k=i+1;k<=n;k++)
			{
				if (a[k]<a[tem]) tem=k;
			}
			tem2=a[i];
			a[i]=a[tem];
			a[tem]=tem2;
		}
		for (int i=1;i<n;i++) cout<<a[i]<<" ";
		cout<<a[n]<<endl;
	}
	return 0;
}
