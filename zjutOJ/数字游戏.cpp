#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	double n,b,c;
	vector<double>a;
	for(;cin>>n&&n!=0;)
	{
		a.clear();
		for(b=2;b<=pow(n,0.5);b++)
		{
			for(c=2;pow(b,c)<=n;c++)
			{
				if(pow(b,c)==n)
				{
					a.clear();
					a.push_back(b);
					a.push_back(c);
				}
			}
		}
		if(a.size()==0) cout<<"0 0"<<endl;
		else cout<<a[0]<<' '<<a[1]<<endl;
	}
	return 0;
}
