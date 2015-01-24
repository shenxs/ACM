#include <iostream>
using namespace std;
int a,b;
char s[100][100]={
	'0'
};
void f(int n,int m)
{
	s[n][m]='0';
	if (s[n-1][m]=='1') f(n-1,m);
	if (s[n+1][m]=='1') f(n+1,m);
	if (s[n][m-1]=='1') f(n,m-1);
	if (s[n][m+1]=='1') f(n,m+1);
}

int main()
{
	int n;
	cin>>n;
	for (int tem=1;tem<=n;tem++)
	{
		int num=0;
		cin>>a>>b;
		for (int i=1;i<=a;i++)
		{
			for (int j=1;j<=b;j++)
			{
				cin>>s[i][j];
			}
		}
		for (int i=1;i<=a;i++)
		{
			for (int j=1;j<=b;j++)
			{
				if (s[i][j]=='1') 
				{
					num++;
					f(i,j);
				}
			}
		}
		cout<<num<<endl;
	}
	return 0;
}
