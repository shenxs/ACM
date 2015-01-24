#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int num=0;num<n;num++)
	{
		int a,b,t;
		cin>>a>>b>>t;
		int k[31]={0,a,b};
		for (int i=3;i<=t;i++)
		{
			if (i%2==1) k[i]=k[i-1]+k[i-2];
			else k[i]=k[i-1]+k[i-2]+k[i-3];
		//	cout<<k[i]<<" ";
		}
		cout<<k[t]<<endl;

	}
	return 0;
}