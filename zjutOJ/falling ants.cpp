// falling ants.cpp 按照两个条件排序
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
using namespace std;
struct ant
{
	int l;
	int w;
	int h;
	int v;
};
int main()
{
	int t;
	while (cin >> t&&t != 0)
	{
		ant*a = new ant[t];
		for (int i = 0; i < t; i++)
		{
			cin >> a[i].l >> a[i].w >> a[i].h;
			a[i].v = a[i].l*a[i].h*a[i].w;
		}
		for (int i = 0; i < t; i++)
		{
			for (int j = i; j < t; j++)
			{
				if (a[i].h < a[j].h)
				{
					swap(a[i].h, a[j].h);
					swap(a[i].w, a[j].w);
					swap(a[i].l, a[j].l);
					swap(a[i].v, a[j].v);
				}
				if (a[i].h == a[j].h)
				{
					if (a[i].v < a[j].v)
					{
						swap(a[i].h, a[j].h);
						swap(a[i].w, a[j].w);
						swap(a[i].l, a[j].l);
						swap(a[i].v, a[j].v);
					}
				}
			}
		}
		cout << a[0].v << endl;
		delete[] a;
	}
	return 0;
}
