// Musical Chairs£¨Ô¼Éª·ò»·£©.cpp : 约瑟夫环，可以用递推的方式来完成，
//第一次用递归爆栈了，递推，迭代不是递归

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int n, d;
	while (cin >> n >> d&&!(n==0&&d==0))
	{
		int last = 0; 
		for (int i = 2; i <= n; ++i)
		{
			last = (last + d) % i;
		}
		cout << n << " " << d << " " << last+1 << endl;
	}
	return 0;
}