#include<iostream>
using namespace std;
	int a[1<<20]={0};
int main()
{
	int tem,k,x,sum;
	bool f[22];
	for (int i=0;i<1<<20;i++)
	{
		for (tem=1;tem<=20;tem++) f[tem]=0;
		k=i;
		tem=1;
		x=0;
		while (k!=0)
		{
			if (k%2==1)
			{
				x++;
				f[tem-1]-=1;
				f[tem]-=1;
				f[tem+1]-=1;
			}
			tem++;
			k/=2;
		}
		sum=0;
		for (tem=1;tem<=20;tem++)
		{
			sum=sum*2+f[tem];
		}
/*		if (sum==0) 
		{
			cout<<i<<endl;
			for (tem=1;tem<=20;tem++) 
			{
				cout<<f[tem]<<" ";
			}
		}*/
		if (a[sum]>x||a[sum]==0)	a[sum]=x;
	}
	int n;
	a[0]=0;
//	cout<<a[0]<<endl;
	while (cin>>n)
	{
		tem=n;
		for (int i=1;i<=19;i++)
		{
			cin>>n;
			tem=tem*2+n;
		}
		cout<<a[tem]<<endl;
	}
	return 0;
}
