#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,y,x;
	char c;
	for(;cin>>n;)
	{
		int m=n;
		x=1;
		for(;m>0;m--)
		{
			c='a';
			cout<<'a';
			cout<<string(m-1,' ');
			y=x;
			for(;y--;)
			{
				cout<<c;
				c=c+'1'-'0';
			}
			cout<<endl;
			x++;
		}	
		cout<<endl;
	}
	return 0;
}