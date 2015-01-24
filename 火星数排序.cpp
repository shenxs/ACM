#include <iostream>
//0,8,1,5,2,3,9,4,7,6
using namespace std;
int a[1000],b[1000];
int change(int t)
{
	int sum=0;
	int x=1;
	while (t!=0)
	{
		switch(t%10)
		{
			case 0:break;
			case 8:sum+=1*x; break;
			case 1:sum+=2*x; break;
			case 5:sum+=3*x; break;
			case 2:sum+=4*x; break;
			case 3:sum+=5*x; break;
			case 9:sum+=6*x; break;
			case 4:sum+=7*x; break;
			case 7:sum+=8*x; break;
			case 6:sum+=8*x; break;
		}
		t=t/10;
	}
	return sum;
}
int main()
{
	int n,t,tem;
	cin>>n;
	for (int num=1;num<=n;num++)
	{
		cin>>t;
		for (int i=1;i<=t;i++) 
		{
			cin>>a[i];
			b[i]=change(a[i]);
		}
		for (int i=1;i<t;i++)
		{
			int k=i;
			for (int j=k+1;j<=t;j++)
			{
				if (b[j]<b[k]) k=j;
			}
			tem=b[k];
			b[k]=b[i];
			b[i]=tem;
			tem=a[i];
			a[i]=a[k];
			a[k]=tem;			
		}
		for (int i=1;i<=t;i++)
		{
			if (i!=1) cout<<" ";
			cout<<a[i];
		}
		cout<<endl;
		
	}
	return 0;
}
