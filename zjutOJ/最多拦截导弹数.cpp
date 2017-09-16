#include <iostream>
#include <stdio.h>
using namespace std;
int a[2000],c[2000];
int s;
void find(int x)
{
	int l=1;
	int r=s;
	while (l<=r)
	{
		int mid=(l+r)/2;
		if (c[mid]<x&&c[mid-1]>=x) {c[mid]=x;return;}
		if (c[mid]>=x) l=mid+1;
		if (c[mid-1]<x) r=mid-1; 
	}
}
int main()
{
	int n;
	while (~scanf("%d",&n)&&n)
	{
		for (int i=1;i<=n;i++) scanf("%d",a+i);
		c[0]=1<<30;
		s=1;
		c[1]=a[1];
		for (int i=2;i<=n;i++)
		{
			if (a[i]<=c[s]) c[++s]=a[i];
			else find(a[i]);
		}
		printf("%d\n",s);
	}
	return 0;
}