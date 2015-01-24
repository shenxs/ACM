#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,f;
	while (cin>>n)
	{
		f=0;
		a=n%3;
		b=n%5;
		c=n%7;
		cout<<n<<"-->";
        if (a==0) 
		{
			cout<<3;
			f=1;
		}
		if (b==0) 
		{
			if (f==1) cout<<",";
			cout<<5;
			f=1;
		}
		if (c==0)
		{
			if (f==1) cout<<",";
			cout<<7;
			f=1;
		}
		if (f==0) cout<<"None";
		cout<<endl;
	}
	return 0;
}