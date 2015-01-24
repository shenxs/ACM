#include<iostream>
using namespace std;
int main()
{
	int a[47]={0,1};
	for (int i=2;i<47;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	int n;
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
	
}
