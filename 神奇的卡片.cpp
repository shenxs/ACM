#include<iostream>
using namespace std;
int main()
{
	int n,time,a,b;
	cin>>n;
	while (n--)
	{
		cin>>time;
		int j=2;
		for (int i=1;i<=time;i++)
		{
			cin>>a>>b;
			if (a==j) j=b;
			else if (b==j) j=a;
		}
		cout<<j<<endl;
		
	}
	return 0;
}
