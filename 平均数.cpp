#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int a[50];
	double s;
	cout.precision(3);
	while (cin>>n)
	{
		s=0;
		for (i=0;i<=n-1;i++)
		{
			cin>>a[i];
			s=s+(double)a[i]/n;
		}
		cout<<fixed<<s<<endl;
	}
    return 0;
}