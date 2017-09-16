#include<iostream>
using namespace std;
int main()
{
	int a[18]={0,0,2};
	for (int i=3;i<=16;i++)
	{
		a[i]=3*a[i-1]+5*a[i-2];
	}
	int n;
	while (cin>>n)
	{
		if (n==0) return 0;
		cout<<a[n]<<endl;
		
	}
}
