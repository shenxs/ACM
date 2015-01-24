#include<iostream>
using namespace std;
int main()
{
	int a[100][100],n,lift,line,m;
	cin>>n;
	for (int num=1;num<=n;num++)
	{
		bool f=true;
		cin>>m;
		for(line=1;line<=m;line++)
		{
			for(lift=1;lift<=m;lift++) cin>>a[line][lift];
		}
		for(line=1;line<=m;line++)
		{
			for(lift=1;lift<=m;lift++) 
			{
				if (a[line][lift]!=a[m+1-line][lift]||a[line][lift]!=a[line][m+1-lift]||a[line][lift]!=a[m+1-line][m+1-lift])
				{
					f=false;
					break;
				}
				if (f==false) break;
			}
		}
		if (f==true) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}