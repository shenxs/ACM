#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int f[210];
int find(int x)
{
	if (f[x]==x) return x;
	return f[x]=find(f[x]);
}

int main()
{
	int n,m,ans,x,y,t1,t2;
	while (cin>>n>>m)
	{
		if (n==0&&m==0) break;
		ans=n-1;
		for (int i=1;i<=n;i++) f[i]=i;
		while (m--)
		{
			cin>>x>>y;
			t1=find(x);
			t2=find(y);
			if (t1!=t2)
			{
				f[t1]=t2;
				ans--;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}