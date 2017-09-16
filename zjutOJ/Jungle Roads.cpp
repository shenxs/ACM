// Jungle Roads.cpp :  
//并（join）查（find）集maybe是这样吧

#include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;
int pre[30];//记录上级
int v[900];int u[900];//记录两条路的端点
int w[900];//一条路的价钱
int r[900];//边序号
int find(int x)
{
	int r = x;
	while (pre[r] != r) r = pre[r];
	int j;
	while (pre[x] != r)
	{
		j = pre[x];
		pre[x] = r;
		x = j;
	}
	return r;
}
void join(int x, int y)
{
	int fx = pre[x]; int fy = pre[y];
	if (fx != fy)
	{
		pre[fx] = fy;
	}
}
int  cmp(const int i, const int j) { return w[i] < w[j]; }//新的知识点
int main()
{
	int n;
	while (cin >> n&&n)
	{
		memset(v, 0, sizeof(v));memset(u, 0, sizeof(u));memset(w, 0, sizeof(w));//还原，清零
		
		int number = 1;//记录有几条边
		for (int i = 1; i < n; i++)
		{
			char c;	cin >> c;
			int k; cin >> k;
			int x;
			for (int j = 1; j <= k; j++)
			{
				cin >> c; cin >> x;
				v[number] = i; u[number] = c - 'A'+1; w[number] = x;
				number++;
			}
		}//复杂的输入
		int ans = 0;
		for (int i = 1; i <= n; i++) pre[i] = i;
		for (int i = 1; i <= number; i++) r[i] = i;
		sort(r, r + number, cmp);//按照边的价值来排序，不用再整个翻过来了，小技巧
		for (int i = 1; i <= number; i++)
		{
			int e = r[i]; int x = find(u[e]); int y = find(v[e]);
			if (x != y) { ans += w[e]; join(x, y); }
		}
		cout << ans << endl;
	}

	return 0;
}