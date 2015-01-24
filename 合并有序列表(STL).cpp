#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	int a[2000],b[2000],c[4000];
	while(cin>>n>>m)
	{
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for (int i=0;i<m;i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		int t1=0,t2=0,t3=0;
		while(1)
		{
			if (t1==n)
			{
				for (;t2<m;t2++,t3++)
				{
					c[t3]=b[t2];
				}
				break;
			}
			if (t2==m)
			{
				for (;t1<n;t1++,t3++)
				{
					c[t3]=a[t1];
				}
				break;
			}
			if (a[t1]>b[t2]) 
			{
				c[t3]=b[t2];
				t2++;
				t3++;
			}
			else 
			{
				c[t3]=a[t1];
				t1++;
				t3++;
			}
		}
		cout<<c[0];
		for(int i=1;i<n+m;i++) cout<<" "<<c[i];
		cout<<endl;
	}
	return 0;
}
