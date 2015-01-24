#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
	int n,a[4000];
	bool m[4000];
	while (~scanf("%d",&n))
	{
		if (n==1) {
			cin>>a[1];
			cout<<"Jolly\n";
			continue;
		}
		memset(m,0,sizeof(m));
		for (int i=1;i<=n;i++)scanf("%d",&a[i]);
		for (int i=2;i<=n;i++)
		{
			int tem=abs(a[i]-a[i-1]);
			if (m[tem]==true||tem>=n||tem==0)
			{
				printf("Not jolly\n");
				break;
			}
			else m[tem]=true;
			if (i==n)printf("Jolly\n");
		}
	}
	return 0;
}