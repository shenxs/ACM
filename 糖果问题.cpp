#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int a1,b1,a2,b2,ans;
	while (cin>>a1>>b1>>a2>>b2)
	{
		ans=a1+b1;
		while (ans<=a2||ans%a2!=b2) ans+=a1;
		cout<<ans<<endl;
	}
	return 0;
}