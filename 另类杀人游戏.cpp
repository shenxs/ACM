#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int k;
	int n,m,t;
	int i;
	vector<int>a;
	vector<int>::iterator it;
	cin>>k;
	for (int num=0;num<k;num++)
	{
		a.clear();
		int p=0;
		cin>>n>>m>>t;
		for (i=0;i<n;i++) a.push_back(i+1);
		it=a.begin();
		for (i=1;i<=n-2;i++) 
		{
			p=p+m-1;
			if(p>=a.size())p=p%a.size();
			if (a[p]==t)p++;
			if(p>=a.size())p=p%a.size();
			//cout<<a[p]<<endl;
			a.erase(it+p);
			
		}
		for (i=0;i<a.size();i++) 
		{
			if (a[i]!=t) cout<<a[i]<<endl;
		}
	}
	return 0;
}