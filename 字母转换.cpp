#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	char c;
	while(cin>>s)
	{
		for (int i=0;i<s.length();i++)
		{
			if (s[i]>='A'&&s[i]<='Z') s[i]+=32;
            else if (s[i]>='a'&&s[i]<='z') s[i]-=32;
		}
		cout<<s;
		c=getchar();
		cout<<c;
		
	}
    return 0;
}