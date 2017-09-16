#include<iostream>
using namespace std;
int main()
{
	for(int n;cin>>n&&n!=0;)
	{
		int time=0;
		
		int a[1000]={0};
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
			if (a[i]>a[i-1]) time+=6*(a[i]-a[i-1]);
			if (a[i]<a[i-1]) time+=4*(a[i-1]-a[i]);
			time+=5;
		}
		cout<<time<<endl;
	}

	return 0;
}