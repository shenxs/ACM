#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string s1;
	string s2;
	int a,n,b;
	vector<int>s;
	for(;cin>>s1;)
	{
		string s2;
		s.clear();
		a=s1.length()-1;
		n=0;
		for(;n<=a;n++)
		{
			s.push_back(s1[n]);
		}
		sort(s.begin(),s.end());
		b=s.size()-1;
		for(;b>=0;b--)
		{
			s2+=s[b];
		}
		cout<<s2<<endl;
	}
	return 0;
}