#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int bijiao(int a,int b)
{
	int c=0,d=0;
	int n1=a,n2=b;
	int n11=1,n22=1;
	for(;a!=0;)
	{
		c+=a%10;
		a=a/10;
		n11++;
	}
	for(;b!=0;)
	{
		d+=b%10;
		b=b/10;
		n22++;
	}
    if(n11<n22) return n1;
	else if(n11==n22)
	{
		if(c<d) return n1;
		else if(c>d) return n2;
		else return -1;
	}
	else return n2;
}
int main()
{
	int n,m,max;
	for(;cin>>n>>m;)
	{
		max=bijiao(n,m);
		if(max!=-1) cout<<max<<endl;
		else cout<<"the same"<<endl;
	}
	return 0;
}

