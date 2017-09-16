#include<iostream>
#include<vector>
using namespace std;
int main()
{
	unsigned n,a=0;
	for(;cin>>n && n!=0;)
	{
		if(n==1) a+=1;
		else 
		{
			for(int m=2;m*m*m<=n;m++)
			{
				if(m*m*m==n) a+=1;
			}
		}
	}
	cout<<a<<endl;
	return 0;
}

