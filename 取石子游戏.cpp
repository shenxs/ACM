// 取石子游戏.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int ak, bk;
	double x = (1 + sqrt(5.0)) / 2;
	while (cin >> ak >> bk)
	{
		if (ak > bk)
			swap(ak, bk);
		int k =bk-ak;
		if (ak ==int( k*x))
			cout << 0 << endl;
		else
			cout << 1 << endl;
	}
	return 0;
}