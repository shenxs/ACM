#include<iostream>
using namespace std;
bool a[10];
int count(int n)
{
	int num=0,tem;
	for (int i=0;i<=9;i++) a[i]=false;
	while (n!=0)
	{
		tem=n%10;
		n=n/10;
		if (a[tem]==false&&(tem==2||tem==3||tem==5||tem==7))
		{
			num++;
			a[tem]=true;
		}
	}
	return num;
}
int main()
{
	int n,tem1,tem2,m;
	while (cin>>n&&n!=0)
	{
		tem1=999999999;
		tem2=0;
		for (int num=0;num<n;num++)
		{
			cin>>m;
			if (count(m)>tem2||(count(m)==tem2&&m<tem1))
			{
				tem1=m;
				tem2=count(m);
			}
		}
		cout<<tem1<<endl;
	}
	return 0;
}
