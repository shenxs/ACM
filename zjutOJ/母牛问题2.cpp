#include<iostream>
using namespace std;
int main()
{
	long long int a[106]={1,1,1,2,2,3};
	for (int i=6;i<=105;i++)
	{
	    a[i]=a[i-1]+a[i-5];
	}
	int n;
	while (cin>>n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}
