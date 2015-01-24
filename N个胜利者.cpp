#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,m,k; 
	vector<int>a;
	while (cin>>n>>m>>k)
	{
		a.clear();
		for (int i=1;i<=n;i++)a.push_back(i);
		int i=0,tem;
		while (a.size()>k)
		{
			tem=a.size();
			i+=m-1;
			i=i%tem;
			a.erase(a.begin()+i);
		}
		cout<<a[0];
		for (int k=1;k<a.size();k++) cout<<" "<<a[k];
		cout<<endl;
	}
	return 0;
}
