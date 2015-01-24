#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n,m;
	for(;cin>>n>>m;)
	{
		vector<int>a;
		vector<int>b;
		int i=1;
		for(int x=1;x<=n*(m+1);x++)
		{
			if((x-1)%n==0) i=1;
		    a.push_back(i);
			i++;
		}
		b.push_back(a[m-1]);	
		int c=2*m-1;
		int z=2;
		int g=n;
		if(g%2!=0) g++;
		for(;z<=g/2;)
		{
			int f=1;
			int y=0;
			for(;y<=b.size()-1;y++)
			{
				if(a[c]==b[y]) f=0;
			}
			if(f==1)
			{
				b.push_back(a[c]);
				z++;
				int s=c+1;
				int t=m;
				for(;t!=0;)
				{
					int l=1;
					for(int k=0;k<=b.size()-1;k++)
					{
				        if(a[s]==b[k]) l=0;
					}
					if(l==1)
					{
						s++;
						t--;
					}
					else s++;
				}
				c=s-1;
			}
			else c++;
		}
		int e=b.size()-1;
		for(int u=0;u<=e;u++)
		{
			cout<<b[u];
			if(u!=e) cout<<" ";
		}
		cout<<endl;
	}		
	return 0;
}