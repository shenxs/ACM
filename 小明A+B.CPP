#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,y,x,sum;
	cin>>n;
	for(;n--;)
	{
		cin>>x>>y;
		if(x>=100) x=x%100;
		if(y>=100) y=y%100;
		sum=x+y;
		if(sum>=100) sum=sum-100;
		cout<<sum<<endl;
	}
	return 0;
}