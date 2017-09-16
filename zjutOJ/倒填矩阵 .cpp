#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for (int n,m=0;cin>>n;)
	{
		if (m>0) cout<<endl;
		m++;
		for (int i=n*n-1;i>=0;i--)
		{
			
			if (i>9)cout<<setw(5)<<i;
            else cout<<setw(4)<<"0"<<i;
			if (i%n==0)cout<<endl;
			
		}

	}

	return 0;
}