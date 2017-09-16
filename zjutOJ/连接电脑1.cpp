#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n,m,x,y,ans;
	while (cin>>n>>m)
	{
		if (m==0&&n==0) break;
		for (int i=1;i<=m;i++) cin>>x>>y;
		ans=n-m-1;
		if (ans<=0) cout<<0<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}