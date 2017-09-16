// Two Points Revisited.cpp 
//题目的脑洞比较大，有时答案就在输入里面
//设（a,b),(c,d)   (a-c)*(x1-x2)+(b-d)*(y1-y2)==0;abcd的解就比较好求;观察一下就出来解了
//原本打算遍历所有的坐标点，坐标范围是10^9以内，妥妥滴超时了





#include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t; int T = t;
	while (t--&&t<=15000)
	{
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "Case " << T - t << ": "<<y2 << " " << x1 << " " << y1 << " " << x2 << endl;
	}
	//system("pause");
	return 0;
}
