// how many tables.cpp : 
//简单的并查集
#include "stdafx.h"
#include<iostream>
using namespace std;
int pre[1000];
int find(int x);
void join(int x, int y);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n;
		for (int i = 1; i <= n; i++) pre[i] = i;
		cin >> m; int x, y; int ans = n;
		while (m--)
		{
			cin >> x >> y;
			if (find(x)!= find(y))
			{
				join(x, y);
				ans--;
			}
		}
		cout << ans << endl;
	}
	//system("pause");
	return 0;
}
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