#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	double a;
	int b;
	cin>>n;
	while (n--)
	{
		cin>>a>>b;
		if (b==int (a+0.5)) cout<<"Correct\n";
		else cout<<"Not Correct\n";
	}
	return 0;
}