#include<iostream>
using namespace std;
int main()
{
	int a,b,c,s;
	for (a=1;a<=9;a++)
	{
		for (b=0;b<=9;b++)
		{
			for (c=0;c<=9;c++)
			{
				s=100*a+10*b+c;
				if (s==a*a*a+b*b*b+c*c*c) cout<<s<<endl;
			}
		}
	}
	return 0;
}