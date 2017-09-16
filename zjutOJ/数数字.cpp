#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int bijiao(int a,int b)
{
	int c=0;
	for(;a!=0;)
	{
		if(a%10==b) c++;
		a/=10;
	}
	return c;
}
int main()
{
	int a;
	int n;
	for(;cin>>a>>n;)
	{
		cout<<bijiao(a,n)<<endl;
	}
	return 0;
}

