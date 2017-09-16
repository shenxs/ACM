#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int a[10][200];
int main()
{
	int n,m;
	for (int i=0;i<=5;i++) a[i][0]=1;
	for (int i=0;i<=110;i++) a[0][i]=1;
	for (int i=1;i<=5;i++)
	{
		for (int j=1;j<=110;j++)
		{
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	while (cin>>n>>m)
	{
		cout<<a[n][m]<<endl;
	}
	return 0;
}