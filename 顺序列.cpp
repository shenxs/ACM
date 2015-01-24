#include<iostream>
using namespace std;
int main()
{
	int n,m,k,tem,d;
	int a[200];
	cin>>n;
	for (int line=1;line<=n;line++)
	{
		bool f=true;
		cin>>m;
		for (k=0;k<m;k++) cin>>a[k];
		if (m<=2) cout<<"yes"<<endl;
		else
		{
			for(int i=m-1;i>=0;i--)
			{
				for (k=0;k<i;k++)
				{
					if (a[k]<a[k+1])
					{
						tem=a[k];
						a[k]=a[k+1];
						a[k+1]=tem;
					}
				}
			}
			d=a[1]-a[0];
			//for(k=0;k<m;k++) cout<<a[k]<<" ";
			for (k=2;k<m;k++) if (a[k]!=a[k-1]+d) {f=false;break;}
			if(f==true) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}

	}
	return 0;
}