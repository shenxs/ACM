#include<iostream>
#include<iomanip>
using namespace std;
double poly(int n,double x)
{
	if (n==0) return 1;
	if (n==1) return x;
	return (((2*n-1)*x*poly(n-1,x)-(n-1)*poly(n-2,x))/n);
}
int main()
{
	bool b[7]={false};
	cout<<fixed;
	cout<<"  x      p2(x)      p3(x)      p4(x)      p5(x)      p6(x)\n";
	double x,tem;
	int num=1,i;
	while(cin>>x)
	{
		cout.precision(3);
		cout<<x;
		cout.precision(6);
		for (i=2;i<=6;i++)
		{
			tem=poly(i,x);
			if(tem>=0)cout<<"   "<<tem;
			else cout<<"  "<<tem;
		}
		cout<<endl;
	}
	return 0;
}
