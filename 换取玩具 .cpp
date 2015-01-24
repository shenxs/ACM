#include<iostream>
using namespace std;
int main()
{
	for (int n;cin>>n;)
	{
		int num=0;
		int a,b,c;
		for (a=0;a<=n/7;a++)
		{
			for (b=0;b<=(n-7*a)/3;b++)
				num++;

		}
		cout<<num<<endl;
	}
	return 0;
}