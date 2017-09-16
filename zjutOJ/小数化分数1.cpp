#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n;
	for (int num=1;num<=n;num++)
	{
		int a=0,k=1;
		cin>>s;
		for (int i=2;i<s.length();i++)
		{
			a=a*10+s[i]-48;
			k*=10;
		}
//		cout<<a<<" "<<k<<endl;
		for (int i=2;i<=a;i++)
		{
			if (a%i==0&&k%i==0) 
			{
				a=a/i;
				k=k/i;
				i=1;
			}
		}
		cout<<a<<"/"<<k<<endl;
	}
	return 0;
}
