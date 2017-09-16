#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,n;
	for(;cin>>n;)
	{
		a=n;
		if(n%2!=0)
		{
			a=n+1;
			cout<<a/2-1<<' '<<a/2<<endl;
		}
		else cout<<a/2<<' '<<a/2<<endl;
	}
    return 0;
}