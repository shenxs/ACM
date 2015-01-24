#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int a[5];
bool f[10000];
int main()
{
	int cas=1;
	bool q;
	while (cin>>a[1])
	{
		for (int i=2;i<=4;i++) cin>>a[i];
		if (a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0)break;
		if (cas++!=1) cout<<endl;
		memset(f,0,sizeof(f));
		q=true;
		sort(a+1,a+5);
		for (int i=1;i<=4;i++)
		{
			if (a[i]==0) continue;
			for (int j=1;j<=4;j++)
			{
				if (j==i) continue;
				for (int k=1;k<=4;k++)
				{
					if (k==j||k==i) continue;
					for (int h=1;h<=4;h++)
					{
						if (h==i||h==j||h==k) continue;
						if (f[a[i]*1000+a[j]*100+a[k]*10+a[h]]==true) continue;
						if (q==false) cout<<" ";
						else q=false;
						cout<<a[i]<<a[j]<<a[k]<<a[h];
						f[a[i]*1000+a[j]*100+a[k]*10+a[h]]=true;
						
					}
				}
			}
			if (q==false)cout<<endl;
			q=true;
		}
	}
	return 0;
}