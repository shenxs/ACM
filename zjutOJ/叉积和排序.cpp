#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool bijiao(int a,int b)
{
	int c=0,d=0;
	int n1=a,n2=b;
	int n11=1,n22=1;
	for(;a!=0;)
	{
		c+=a%10*n11;
		a=a/10;
		n11++;
	}
	for(;b!=0;)
	{
		d+=b%10*n22;
		b=b/10;
		n22++;
	}
    if(c<d) return true;
	else if(c==d)
	{
		if(n1<=n2) return true;
		else return false;
	}
	else return false;
}
int main()
{
	int n;
	vector<int>e;
	int m;
	int h;
	cin>>h;
	for(;h--;)
	{
		cin>>n;
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

