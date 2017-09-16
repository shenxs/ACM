#include <iostream>
#include<string>
using namespace std;
bool f(string s)
{
	for (int i=0;i<s.length();i++)
	{
		if (s[i]<48||s[i]>=58) return false;
	}
	return true;
}
int main()
{
	string s;
	while (cin>>s)
	{
		if (f(s)) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
