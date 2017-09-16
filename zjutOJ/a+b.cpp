#include <iostream>
#include <string>
using namespace std;
int String2Number(string number);
int main()
{
	string ca, cb;
	int a, b, i = 0;
	while (1)
	{
		a = 0; b = 0; i = 0;
		while (cin >> ca)
		{
			i++;
			if (ca == "+" || ca == "=") break;
			if (i>0) a *= 10;
			a += String2Number(ca);

		}
		i = 0;
		while (cin >> cb)
		{
			i++;
			if ( cb == "=") break;
			if (i>0) b *= 10;
			b += String2Number(cb);
		}
		if (a == 0 && b == 0) break;
		cout << a + b << endl;
	}
	return 0;
}
int String2Number(string number)
{
	string Number[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	int a;
	for (int i = 0; i<10; i++)
	{
		if (number == Number[i])
		{
			a = i;
			break;
		}
	}
	return a;
}
