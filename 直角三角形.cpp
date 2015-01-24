#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[4];
	while (cin>>a[1]>>a[2]>>a[3])
	{
		sort(a+1,a+4);
		if (a[3]*a[3]==(a[1]*a[1])+(a[2]*a[2])) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
