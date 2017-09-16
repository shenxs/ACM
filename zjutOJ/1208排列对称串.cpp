#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool smaller(string a,string b)
{
	if (a.length()<b.length()) return true;
	if (a.length()==b.length()&&a<b) return true;
	return false;
}
bool duichen(string s)
{
	for (int i=0;2*i<s.length();i++)
	{
		if (s[i]!=s[s.length()-1-i]) return false;
	}
	return true;
}
int main()
{
	vector<string>s;
	string line;
	while (getline(cin,line))
	{
		if (duichen(line))
		{ 
		    s.push_back(line);
	    }
	}
	for (;s.size()!=0;)
	{
		int k=0;
		for (int i=1;i<s.size();i++)
		{
			if (smaller(s[i],s[k])) k=i;
		}
		cout<<s[k]<<endl;
		s.erase(s.begin()+k);
	}
	return 0;
}
