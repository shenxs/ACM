#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,a;
	for(;cin>>n&&n!=0;)
	{
		vector<int>m;
		for(;n--;)
		{
			cin>>a;
			m.push_back(a);
		}
		sort(m.begin(),m.end());
		int x=m.size()-1;
		for(int y=0;y<=x;y++)
		{
			int f=0;
			for(int z=0;z<=x;z++)
			{
				if(m[y]==m[z]&&y!=z) f=1;
			}
			if(f==0) cout<<m[y]<<endl;
		}
	}
	return 0;
}