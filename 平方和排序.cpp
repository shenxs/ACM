#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool bijiao(string s1,string s2)
{
	int a,b,c=0,d=0;
	a=s1.length()-1;
	b=s2.length()-1;
	int n=0;
	for(;n<=a;n++)
	{
		c+=(s1[n]-'0')*(s1[n]-'0');
	}
	int m=0;
	for(;m<=b;m++)
	{
		d+=(s2[m]-'0')*(s2[m]-'0');
	}
    if(c<d) return true;
	else return false;
}
int main()
{
	int e;
	string s;
	vector<string>y;
	for(;cin>>e&&e!=0;)
	{ 
		int f=e-1;
		y.clear();
		for(;e--;)
		{
			cin>>s;
			y.push_back(s);
		}
		sort(y.begin(),y.end(),bijiao);
		int g=0;
		for(;g<=f;g++)
		{
			cout<<y[g];
			if(g!=f) cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}

