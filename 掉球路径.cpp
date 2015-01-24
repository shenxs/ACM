#include<iostream>
using namespace std;
int main()
{
	int d,n;
	while (cin>>d>>n)
	{
		int x=1;
		cout<<x;
		while (d>1)
		{
			if (n%2==1) 
			{
				x=x*2;
			}
			else if (n!=0) x=x*2+1;
			else x=x*2;
			cout<<" "<<x;
			n=(n+1)/2;
			d--;
		}
		cout<<endl;
	}
	return 0;
}
