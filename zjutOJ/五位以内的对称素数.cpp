#include<iostream>
using namespace std;
bool chen(unsigned a)
{
	int n,i,t[6];
	for (i=1;a!=0;i++) 
	{
		t[i]=a%10;
		a=a/10;
	}
	for (n=1;n<=(i-1)/2;n++) if (t[n]!=t[i-n]) return false;
	return true;
}
void main()
{
	for (unsigned n;cin>>n;)
	{
		if (n==1) 
		{
			cout<<"No"<<endl;
			continue;
		}
		bool f=false;
		if(n<100000&&chen(n))
		{
				bool t=true;
				for (int i=2;i*i<=n;i++)
				{
					if (n%i==0) t=false;
				}
				if (t==true) f=true;
		}
		if (f==true) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

