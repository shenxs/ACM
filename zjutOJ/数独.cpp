#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <algorithm>
using namespace std;
int a[10][10];
int sum;
bool f[10][10][10];
bool ch[10][10];
bool check(int num,int add)
{
	int x=add/9;
	int y=add%9;
	if (f[x][9][num]==1) return false;
	if (f[9][y][num]==1) return false;
	if (ch[x/3*3+y/3+1][num]==1) return false;
	return true;
}
void dfs(int add)
{
//	cout<<add<<" ";
//	cout<<a[(add-1)/9][(add-1)%9]<<endl;
/*	for (int i=0;i<9;i++) 
	{
		for (int j=0;j<9;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}  
	cout<<endl;
	getch();*/
	if (add==81)
	{
		sum++;
		return;
	}
	int x=add/9;
	int y=add%9;
	if (a[x][y]!=0) 
	{
		dfs(add+1);
		return;
	}
	for (int i=1;i<=9;i++)
	{
		if (check(i,add)) 
		{
			f[x][9][i]=1;
			f[9][y][i]=1;
			ch[x/3*3+y/3+1][i]=1;
			a[x][y]=i;
			dfs(add+1);
			f[x][9][i]=0;
			f[9][y][i]=0;
			ch[x/3*3+y/3+1][i]=0;
			a[x][y]=0;
		}
	}
	return ;
}
int main()
{
	int n;
	cin>>n;
	while (n--)
	{
		memset(f,0,sizeof(f));
		memset(ch,0,sizeof(ch));
		for (int i=0;i<9;i++)
		{
			for (int j=0;j<9;j++)
			{
				scanf("%d",&a[i][j]);
				if (a[i][j]!=0)
				{
					f[i][9][a[i][j]]=1;
					f[9][j][a[i][j]]=1;
					ch[i/3*3+j/3+1][a[i][j]]=1;
				}
			}
		}
		sum=0;
		dfs(0);
		printf("%d\n",sum);
		
	}
	return 0;
}