// 接馅儿饼.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
int dp[100005][10];
int main()
{
	int n;
	while (cin >> n&&n != 0)
	{
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n; i++)
		{
			int x, t;
			scanf_s("%d%d", &x, &t);
			dp[t][x]++;
		}
		//输入
		for (int i = 100000; i >= 0; i--)
		{
			dp[i][0] += max(dp[i + 1][0], dp[i + 1][1]);
			for (int j = 1; j <= 9; j++)
			{
				int tem = max(dp[i + 1][j - 1], dp[i + 1][j]);
				tem = max(dp[i + 1][j + 1], tem);
				dp[i][j] += tem;
			}
			dp[i][10] += max(dp[i + 1][9], dp[i + 1][10]);
		}
		cout << dp[0][5] << endl;

	}
	return 0;
}
