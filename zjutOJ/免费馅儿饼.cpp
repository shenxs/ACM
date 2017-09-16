#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int dp[100005][11];
int main()
{
	int n,x,t;
	while (~scanf("%d",&n)&&n)
	{
		memset(dp,0,sizeof(dp));
		for (int i=1;i<=n;i++)
		{
			scanf("%d%d",&x,&t);
			dp[t][x]++;
		}
		for (int i=100000;i>=0;i--)
		{
			dp[i][0]+=max(dp[i+1][0],dp[i+1][1]);
			for (int j=1;j<=9;j++)
			{
				int tem=max(dp[i+1][j-1],dp[i+1][j]);
				tem=max(dp[i+1][j+1],tem);
				dp[i][j]+=tem;
			}
			dp[i][10]+=max(dp[i+1][9],dp[i+1][10]);
		}
		printf("%d\n",dp[0][5]);
	}
	return 0;
}
