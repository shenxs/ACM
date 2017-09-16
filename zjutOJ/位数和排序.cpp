#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool bijiao(int a,int b)
{
	int c=0,d=0;
	int n1=a,n2=b;
	for(;a!=0;)
	{
		c+=a%10;
		a=a/10;
	}
	for(;b!=0;)
	{
		d+=b%10;
		b=b/10;
	}
    if(c<d) return false;
	else if(c==d)
	{
		if(n1<=n2) return false;
		else return true;
	}
	else return true;
}
int main()
{
	int n;
	vector<int>e;
	int m;
	for(;cin>>n&&n!=0;)
	{ 
		e.clear();
		for(;n--;)
		{
			cin>>m;
			e.push_back(m);
		}
		sort(e.begin(),e.end(),bijiao);
		int g=0;
		for(;g<=e.size()-1;g++)
		{
			cout<<e[g];
			if(g!=e.size()-1) cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}

