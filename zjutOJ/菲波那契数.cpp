#include<iostream>
using namespace std;
int main()
{
	int a[47];
	a[0]=0;
	a[1]=1;
	for (int i=2;i<=46;i++) a[i]=a[i-1]+a[i-2];
	int n;
	while (cin>>n) cout<<a[n]<<endl;
	return 0;
}