#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	for (int a=0;9*a<=300;a++)
	{
		for (int b=0;6*b+9*a<=300;b++)
		{
			c=100-a-b;
			if (9*a+6*b+c==300) cout<<a<<" "<<b<<" "<<c<<endl;
		}
	}
	return 0;
}
