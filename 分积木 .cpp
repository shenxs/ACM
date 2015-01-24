#include<iostream>
#include<algorithm>
using namespace std;
struct person{
	int a;
	int b;
}x[20000];
bool f(person s1,person s2)
{
	return s1.b<s2.b;
}
int main()
{
	int n,m;
	while (cin>>n>>m)
	{
		if (n==0&&m==0) break;
		for (int i=0;i<n;i++)
		{
			cin>>x[i].a>>x[i].b;
		}
		sort(x,x+n,f);
		bool f=true;
		for (int i=0;i<n;i++)
		{
			if (x[i].b>m) 
			{
				f=false;
				break;
			}
			m=m+x[i].a;
		}
		if (f==true) cout<<"Yes\n";
		else cout<<"No\n";
		
	}
	return 0;
}
