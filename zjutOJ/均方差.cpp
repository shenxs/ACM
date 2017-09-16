#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout.precision(5);
	cout<<fixed;
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		int m,a[100],k;
		double sum=0,s=0;
		cin>>m;
		for (k=0;k<m;k++) 
		{
			cin>>a[k];
			sum+=double(a[k])/m;
		}
		for (k=0;k<m;k++)  s+=(a[k]-sum)*(a[k]-sum)/m;
		cout<<sqrt(s)<<endl;
	}
	return 0;
}