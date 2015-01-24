#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s,a;
	for(;cin>>s&&s!="0";)
	{
		a=s;
		reverse(a.begin(),a.end());
		if(a==s) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}


