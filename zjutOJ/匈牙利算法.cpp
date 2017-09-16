/*讲解可以参考
http://blog.csdn.net/dark_scope/article/details/8880547
生动有趣

*/

#include<iostream>
#define _clr(x) memset(x,0,sizeof(x))  
using namespace std;
int line[1000][1000];//记录两个点之间是否有连线
int used[1000];//记录是否被标记过	
int girl[1000];//记录girl相连的boy
bool find(int x);
int k, m, n;
int main()
{
	while (cin >> k&&k)
	{
		cin >> m >> n;
		_clr(line); _clr(girl);//输入
		for (int i = 0; i < k; i++)
		{
			int a, b;
			cin >> a >> b;
			line[a][b]=1;
		}
		int ans = 0;//结果记为ans
		//遍历一遍boy
		for (int i = 1; i <=m; i++)
		{ 
			_clr(used);//每次都重置一遍记录
			if (find(i)) ans++;//如果找到了加一
		}
		cout << ans << endl;//输出
	}
	return 0;
}
bool find(int x)
{
	for (int i = 1; i <=n; i++)//尝试所有的可能性，所有的女孩都试一遍
	{
		if (line[x][i] == 1 && used[i] == 0)//如果相互暧昧且没有被标记
		{
			used[i] = 1;//标记她
			if (girl[i] == 0 || find(girl[i]))//如果女孩还没有被标记或可以换男伴，这就是为什么要标记，让递归的时候可以有依据
			{
				girl[i] = x;//记录女孩的男孩
				return 1;
			}
		}

	}
	return 0;
}
