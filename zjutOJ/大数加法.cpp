// 大数加法似乎没什么好讲的，但是a这题还是让我wa了好几次，
//做题钱还是要仔细地审题看过再提交

#include "stdafx.h"
#include<iostream>
#include<string>
#include<algorithm>
#define _clr(x) memset(x,0,sizeof(x))
int a[1005];
int b[1005];
int c[1005];
using namespace std;
int main()
{
	int t;
	cin >> t; int x = 0;
	for (int l = 1; l <= t;l++)
	{
		_clr(a); _clr(b); _clr(c);
		string s1, s2;
		cin >>s1>> s2;
		if (x) cout << endl;
		int len1 = s1.length();
		int len2 = s2.length();
		for (int i = 0; i < len1; i++)
			a[len1 - i - 1] = s1[i]-'0';
		for (int i = 0; i < len2; i++)
			b[len2 - i - 1] = s2[i]-'0';
		int m = max(len1, len2);
		for (int i = 0; i < m; i++)
		{
			c[i] +=( a[i] + b[i]);
			if (c[i] > 9)
			{
				c[i] -= 10;
				c[i + 1] += 1;
			}
		}
		cout << "Case " << l << ":" << endl;
		cout << s1 << " + " << s2 << " = ";
		if (c[m])
			cout << 1;
		for (int i = m-1; i >=0; i--)
			cout << c[i];
		cout << endl;
		x = 1;
	}
	//system("pause");
	return 0;
}
