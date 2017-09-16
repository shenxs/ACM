#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout.precision(3);
	cout<<fixed;
	double x1,y1,x2,y2,x,y;
	cin>>x1>>y1>>x2>>y2;
	double a,b,c,d=0,d1;
	a=y2-y1;
	b=x1-x2;
	c=(x2-x1)*y1-(y2-y1)*x1;
	while(cin>>x>>y)
	{
		d1=abs((a*x+b*y+c)/sqrt(a*a+b*b));
		if (d1>d) d=d1;
	//	cout<<d<<endl;
	}
	cout<<d<<endl;
	return 0;
}
