// family work.cpp : 
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		double a, b, m;
		cin >> a >> b >> m;
		if (a > (a + b) / 3)
			cout << m*(2 * a - b) / (a + b) << endl;
		else
			cout << 0 << endl;
	}
	//system("pause");
	return 0;
}


