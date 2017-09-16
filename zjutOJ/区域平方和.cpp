#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,sum;
	for(;cin>>a>>b;)
	{
		sum=0;
		int c=a;
		for(;c<=b;c++)
		{
			sum=sum+c*c;
		}
		cout<<sum<<endl;
	}
	return 0;
}

