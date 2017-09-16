#include <iostream>
#include <stdio.h>
using namespace std;
int n,k;
int a[20],s[20],sum;
bool f;
void dfs(int w,int d)
{
	s[d]=a[w];
	sum+=s[d];
	if (sum==n) 
	{
		for (int i=1;i<=d;i++)
		{
			if (i!=1) cout<<"+";
			cout<<s[i];
		}
		cout<<endl;
		f=true;
		sum-=s[d];
		return;
	}
	if (sum>n) {sum-=s[d];return ;}
	for (int t=w+1;t<=k;t++) 
	{
		if (t!=w+1&&a[t]==a[t-1]) continue;
		dfs(t,d+1);
	}
	sum-=s[d];
	return;
}
int main()
{
	while (~scanf("%d%d",&n,&k))
	{
		if (n==0&&k==0) break;
		f=false;
		cout<<"Sums of "<<n<<":\n";
		for (int i=1;i<=k;i++)scanf("%d",a+i);
		for (int i=1;i<=k;i++)
		{
			sum=0;
			if (i!=1&&a[i]==a[i-1]) continue;
			dfs(i,1);
		}
		if (f==false) cout<<"NONE\n";
	}
	return 0;
}