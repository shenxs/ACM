#include<iostream>
using namespace std;
int main()
{
	int a[30][1000]={0};
	int n,m;
	a[1][1]=1;
	int tem1=1;
	for (int i=2;i<=13;i++)
		{
			tem1*=2;
			for (int k=0;k<=tem1-1;k++)
			{
				int tem3=k;
				int tem=2;
				int sum=1;
				while(tem<=i)
				{
					if (tem3%2==0) sum-=tem;
					else sum+=tem;
					tem3/=2; 
					tem++;
				}
				if(sum>=0) a[i][sum]++;
			}
		}
	while (cin>>n>>m)
	{
		if (a[n][m])cout<<a[n][m]<<endl;
		else cout<<"NO\n";
	}
	return 0;
}
