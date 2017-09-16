#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double v;
	int m,n;
	for(;cin>>v>>m>>n;)
	{
		v=v*pow(1+0.000003*m,n);
		cout<<setiosflags(ios::fixed)<<setprecision(5)<<v<<endl;
	}
	return 0;
}
