#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	while (n--)
	{
		cin>>a;
		for (int i=1;i<=a;i++)
		{
			if (a%i==0) cout<<i;
		}
		cout<<endl;
	}
	return 0;
} 
