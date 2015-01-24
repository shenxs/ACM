#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double a,b;
	while (n--)
	{
		cin>>a;
		for (int i=int(a-1);i<int (a+2);i++)
		{
			if (i>=a&&i-1<a) cout<<i<<endl;
		}
		
	}
	return 0;
}
