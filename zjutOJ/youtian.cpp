#include<iostream>
#include<string>
using namespace std;
char oil[110][110];
void tansuo(int i, int j);
int main()
{
	int m, n;
	while (cin >> m >> n&&m != 0)
	{
		int q = 0;
		for (int i = 1; i <= m;i++)
		{
			for (int j = 1; j <= n;j++)
			{
				cin >> oil[i][j];
			}
		}
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (oil[i][j]=='@')
				{
					tansuo(i, j);
					q++;
				}
			}
		}
		cout << q << endl;
	}
	return 0;
}
void tansuo(int i, int j)
{
	oil[i][j] = '*';
	for (int k = i - 1; k <= i + 1; k++)
	{
		for (int q = j - 1; q <= j + 1; q++)
		{
			if (oil[k][q] == '@')
				tansuo(k, q);	
		}
	}
}
