#include<iostream>
using namespace std;

bool a[20000]={0};
bool f(int n)
{
	for (int i=2;i*i<=n;i++)
	{
		if (n%i==0) return false;
	}
	return true;
}
int main()
{
	for (int i=3;i<=10000;i+=2)
	{
		a[i]=f(i);
	}
	int t;
	int n;
	while (cin>>n)
	{
		t=n/2;
		if (t%2==0) t--;
		while (t>=3)
		{
			if (a[t]&&a[n-t])
			{
				cout<<t<<" "<<n-t<<endl;
				break;
			}
			t-=2;
		}
	}
	return 0;
}
