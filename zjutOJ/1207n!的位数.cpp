#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	vector<int>a(10000000);
	a[1]=1;
	double sum=1.0;
	for (int i=2;i<10000000;i++)
	{
		sum+=log10(i*1.0);
		a[i]=sum;
	}
	int n;
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}
