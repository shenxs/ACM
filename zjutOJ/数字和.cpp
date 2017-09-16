#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin>>s)
	{
		int sum=0;
		for(int i=0;i<s.length();i++) sum+=s[i]-48;
		cout<<sum<<endl;
	}

	return 0;
}