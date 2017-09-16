#include<iostream>
using namespace std;
int main()
{
	int n,i,s,k;
	char a[1];
	a[0]='S';
	a[1]='T';
	k=0;
	while (cin>>n)
	{
		for (i=1;i<=n;i++)
		{
			for (s=1;s<=i-1;s++) cout<<" ";
			for (s=1;s<=2*n-1-2*i;s++) 
			{
				cout<<a[k];
				if (k==1) k=0;
				else k=1;
            }
			cout<<endl;
			k=0;
		}
	}
	return 0;
}