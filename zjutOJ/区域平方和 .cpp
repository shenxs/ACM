#include<iostream>
using namespace std;
int main()
{
	for (int a,b;cin>>a>>b;)
	{
		int sum=0;
		for (int i=a;i<=b;i++)sum+=i*i;
		cout<<sum<<endl;
	}
	return 0;
}