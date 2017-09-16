#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,f;
	while (cin>>n)
	{
		int t=1;
		f=0;
		if (n>=100&&n<=999)
		{
			if (n/100==n%10)
			{
				for (int i=2;i<=sqrt(float(n));i++) 
				{
					if (n%i==0) t=0; 
				}
				if (t==1) f=1;
			}
		} 
		if (f==1) cout<<"Yes"<<endl;
		if (f==0) cout<<"No"<<endl;
	}
	return 0;
}

