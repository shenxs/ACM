#include<iostream>
using namespace std;
int main()
{
	int a[41]={0,1,1,1};
	for (int i=4;i<=41;i++) a[i]=a[i-1]+a[i-3];
	int n;
	while (cin>>n) cout<<a[n]<<endl;
	return 0;
}