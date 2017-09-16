#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s;
	double a,b,c=0,d,e; 
    for(;cin>>s>>a>>b;)
	{
		e=a*b;
		e=(float)((int)(e*10+0.5))/10;
		c+=e;
	}
	cout<<c<<endl;
	return 0;
}
