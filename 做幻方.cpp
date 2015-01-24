#include<iostream>
#include<iomanip>
using namespace std;
int a[40][40];
int main()
{
	int n;
	int line,row;
	int temx,temy;
	while (cin>>n)
	{
		if (n==0) break;
		for (int i=1;i<=n;i++)
		{
			for (int j=1;j<=n;j++)
			{
				a[i][j]=0;
			}
		}
		line=n;
		row=n/2+1;
		for (int t=1;t<=n*n;t++)
		{
			a[line][row]=t;
			temx=line;
			temy=row;
			line++;
			row++;
			if(line>n) line=1;
			if(row>n) row=1;
			if (a[line][row]!=0) 
			{
				line=temx-1;
				row=temy;
			}
		}
		for (int i=1;i<=n;i++)
		{
			for (int j=1;j<=n;j++)
			{
				cout<<setw(3)<<a[i][j];
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
