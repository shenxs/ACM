#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int a[11000];
int main()
{
	int t,num;
	int l,r,ans;
	for (int i=1;i<=10000;i++)
	{
		t=i;
		num=1;
		while (t!=1) 
		{
			if (t%2) t=t*3+1;
			else t/=2;
			num++;
		}
		a[i]=num;
	}
	while (cin>>l>>r)
	{
		ans=0;
		
		if (l<=r)
		{	
			for (int i=l;i<=r;i++)
			{
				if (ans<a[i])ans=a[i];
			}
		}
		else 
		{
			for (int i=r;i<=l;i++)
			{
				if (ans<a[i])ans=a[i];
			}
			
		}
		cout<<l<<" "<<r<<" "<<ans<<endl;
	}
	return 0;
}