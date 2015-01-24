#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int n,m;
	int a[25];
	a[0]=1;
	a[1]=2;
	a[2]=3;
	for(int b=3;b<=24;b++)
	{
		a[b]=a[b-1]+a[b-2];
	}
	for(;cin>>n;)
	{
	    cout<<a[n-1]<<endl;
	}
	return 0;
}