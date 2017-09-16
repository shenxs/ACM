// 数塔，可以算是模板题目，
//
/*
*
*
**/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <queue>
#include <iomanip>
#define _clr(x) memset(x,0,sizeof(x))
#define Max 101
using namespace std;
int dp[105][105];int n;
void fun()
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
			//	7
			//8   9
			//若情况如上则7变成16
		}
	}
}

int main()
{
	int c;
	cin >> c;//样例的个数
	for (int q = 0; q < c; q++)
	{
		 cin >> n;//数塔的高度
		_clr(dp);//清空dp数组
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
				cin >> dp[i][j];//输入
		}
		fun();//从下往上计算一遍
		cout << dp[1][1] << endl;
	}
	//system("pause");
	return 0;
}