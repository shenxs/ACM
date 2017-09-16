#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string s;
	while (cin>>s)
	{
		int a=0,b=0;
		for (int i=0;i<s.length();i+=2)
		{
			a+=s[i]-48;
			if (i!=s.length()-1) b+=s[i+1]-48;
		}
		if ((a-b)%11==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;

	}
	return 0;
}