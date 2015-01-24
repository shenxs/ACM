#include<iostream>
using namespace std;
bool sushu(int a)
{
	if (a==1) return false;
	for (i=2;i*i<=a;i++)
	{
		if (a%i==0)return false;
	}
	return true;
}
int main()
{
	int a[10]={0};
	for (int N,n;cin>>N>>n;)
	{
		int i,t;
		int sum=0;
		if (!sushu(N)) continue;
		for (i=1;N!=0;i++)
		{
			a[i]=N%n;
			N=N/n;
		}
		for (t=1;t<i;t++)
			sum+=a[i]*a[i];
		for (i=1;sum!=0;i++)
		{
			a[i]=sum%n;
			sum=sum/n;
		}

	}


	return 0;
}