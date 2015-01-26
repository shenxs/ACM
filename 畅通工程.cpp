// 并查集
//上级（他们叫父集）
#include "stdafx.h"
#include<iostream>
using namespace std;
int pre[1000];//记录她的上级
int find(int x);//找他的上级
void join(int x, int y);//合并两个集合，将他们的老大合并就可以了（两棵树的根）
int main()
{
	int n, m;
	while (cin >> n&&n)
	{
		cin >> m; int ans = n - 1;
		for (int i = 1; i <= n; i++)	pre[i] = i;//一开始每个数字，每个人（大侠）自成一派
		int x, y;
		while (m--)
		{
			cin >> x >> y;
			if (find(x) != find(y))//如果不是一个根，不是一派的
			{
				join(x, y);//两个根上，一个合并到另一个
				ans--;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
int find(int x)
{
	int r = x;
	while (pre[r] != r) r = pre[r];//找根，一个数的根是不是自己，是自己就是根了，不是继续找
	int j;
	while (pre[x]!=r)//压缩路径，前面找到了根r，再从x开始找上级全都改成r；
	{
		j = pre[x];
		pre[x] = r;
		x = j;
	}
	return r;
}
void join(int x, int y)//合并两个集合的根，将老大并合并到另一个下面
{
	int fx = pre[x]; int fy = pre[y];
	if (fx != fy)
	{
		pre[fx] = fy;
	}

}