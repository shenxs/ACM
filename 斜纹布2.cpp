#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n;
	for(;cin>>s>>n;)
	{
		int a=n;
		int b=0;
		for(;a--;)
		{
			int c=b;
			for(int d=0;d<=n-1;d++)
			{
				if(c==s.length()) c=c-s.length();
				cout<<s[c];
				c++;
			}
			cout<<endl;
			b++;
			if(b==s.length()) b=b-s.length();
		}
		cout<<endl;
	}
	return 0;
}
