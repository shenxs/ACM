#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool f(string a,string b)
{
	string s1,s2;
	s1=a.substr(6);
	s2=b.substr(6);
	if (s1!=s2) return s1<s2;
	s1=a.substr(3);
	s2=b.substr(3);
	if (s1!=s2) return s1<s2;
	return a<b;
	
}
int main()
{
	string s[1000];
	int i=0;
	while(cin>>s[i])i++;
	sort(s,s+i,f);
	for (int t=0;t<i;t++) cout<<s[t]<<endl;
	return 0;
}
