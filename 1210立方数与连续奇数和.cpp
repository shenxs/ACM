#include<iostream>
using namespace std;
int main()
{
	int n,i;
	while(cin>>n)
	{
		if (n%2!=0)
		{
			cout<<n<<"^3=";
			for(i=-n/2;i<n/2;i++)
			{
				cout<<n*n+2*i<<"+";
			}
			cout<<n*n+2*i<<endl;
		}
		else 
		{
			cout<<n<<"^3=";
			for(i=-n/2;i<n/2-1;i++)
			{
				cout<<n*n+2*i+1<<"+";
			}
			cout<<n*n+2*i+1<<endl;
		}
	}
	return 0;
}
