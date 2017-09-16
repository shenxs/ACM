#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s1;
	string s2;
	int a,b,n,c;
	for(;cin>>s1>>s2;)
	{
		c=0;
		a=s2.length();
		b=s1.length()-1;
		n=0;
		for(;n<=b;n++)
		{
			if(s2==s1.substr(n,a))
			{
			   c=1;
			   break;
			}
		}
		if(c==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
