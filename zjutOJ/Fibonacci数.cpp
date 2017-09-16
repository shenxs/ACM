#include<iostream>
using namespace std;
int main()
{
	int a[46];
	a[0]=1;a[1]=1;
	for (int i=2;i<46;i++) a[i]=a[i-1]+a[i-2];
	int n;
	while (cin>>n) cout<<a[n-1]<<endl;
	return 0;
}