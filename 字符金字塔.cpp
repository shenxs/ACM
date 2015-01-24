#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,y,x;
	char c;
	for(;cin>>n&&n!=0;)
	{
		c='A';
		int m=n;
		x=1;
		for(;m>0;m--)
		{
			cout<<string(m-1,' ');
			cout<<string(2*x-1,c);
			cout<<endl;
			x++;
			c=c+'1'-'0';
		}
		cout<<endl;
	}
	return 0;
}

