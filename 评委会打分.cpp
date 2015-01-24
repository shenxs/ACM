#include<iostream>
using namespace std;
int main()
{
	int a[100];
	cout.precision(2);
	cout<<fixed;
	int i;
	for (int n;cin>>n;)
	{
		int max=0,min=0;
		double sum=0;
		for (int num=0;num<n;num++) cin>>a[num];
		for (i=1;i<n;i++) 
		{
			if (a[i]>a[max]) max=i;
			if (a[i]<a[min]) min=i;
		}
		for (i=0;i<n;i++) 
		{
			if (i==min||i==max) continue;
			sum+=a[i];
		}
		cout<<sum/(n-2)<<endl;
	}
	return 0;
}
