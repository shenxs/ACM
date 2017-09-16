#include <iostream>
#include <stdio.h>
using namespace std;
int a[300000],dp[300000];
int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++) cin>>a[i];
	int tem=1;
	int sum=0;
	for (int i=1;i<=n;i++)
	{
			if (tem==1&&a[i]>=a[i-1]&&a[i]>=a[i+1]) 
			{
				tem=0;
				sum+=a[i];
			}
			else if (tem==0&&a[i]<=a[i-1]&&a[i]<=a[i+1])
			{
				tem=1;
				sum-=a[i];
			}
	}
	cout<<sum<<endl;
	return 0;
}