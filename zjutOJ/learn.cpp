#include<iostream>
#include<algorithm>
using namespace std;
int a[2000];//物品
int main()
{
	int n, k;
	while (cin >> n >> k&&k >= 1 && 2 * k <= n&&n < 2000)
	{
		int min, max;
		max = 0; min = 1 << 16;
		memset(a, -1, sizeof(a));
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (min > a[i]) min = a[i];
			if (max < a[i]) max = a[i];
		}
		int sum = 0;
		for (int x = 0; x <= max - min; x++)
		{
			if (!k) break;
			for (int i = 0; i < n; i++)
			{
				if (!k) break;
				for (int j = 0; j < n; j++)
				{
					if (!k) break;
					if ((a[i] - a[j] == x || a[i] - a[j] == -x) && (a[i] != -1) && (a[j] != -1)&&i!=j)
					{
						if (k)
						{
							sum += x*x;
							a[i] = a[j] = -1;
							k -= 1;
						}
					}
				}

			}
		}
		cout << sum << endl;

	}
	return 0;
}
