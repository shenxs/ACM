#include<iostream>
using namespace std;
int main()
{
	cout.precision(2);
	cout<<fixed;
	double h;
	int a,b,t;
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
	    cin>>a>>b>>t;
		h=(b*1.0/a*1.0)*t;
		cout<<h<<endl;
	}
	return 0;
}
