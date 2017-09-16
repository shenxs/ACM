#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	int a,b;
	for(;cin>>s;)
	{
		a=0;
		b=0;
		for(;b<=s.size()-2;b++)
		{
			if(s.substr(b,2)=="DD")
			{
			   a=1;
			   break;
			}
			else if(s[0]=='D'&&s[s.size()-1]=='D')
			{
				a=1;
				break;
			}
		}
		if(a==1) cout<<"Cheers"<<endl;
		else cout<<"Orz,I can't find it"<<endl;
	}
	return 0;
}
