#include<iostream>
using namespace std;
int main()
{
	int a[100]={0},i,t=1,k;
	for (i=2;i<10000;i++)
	{
	    int sum=1;
		for(k=2;k*k<i;k++)
		{
			if (i%k==0) sum+=k+i/k;
		}
		if (k*k==i) sum+=k;
		if (sum==i) 
		{
			a[t]=sum;
			t+=1;
		}
	}
	for (int n;cin>>n;)
	{
		cout<<n<<":";
		for (i=1;i<t&&a[i]<=n;i++) 
			cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}