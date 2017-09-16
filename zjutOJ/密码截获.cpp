//完美脱线小新郎
#include<iostream>
#include<string>
using namespace std;
bool duichen(string s)
{
	for (int i=0;i<=(s.length()-1)/2;i++)
	{
		if (s[i]!=s[s.length()-1-i]) return false;
	}
	return true;
}
int main()
{
	for(string s;cin>>s;)
	{
		string a;
		int size=s.length();
		while (size>1)
		{
			for (int i=0;i<=s.length()-size;i++)
			{
				a=s.substr(i,size);
				if (duichen(a)) break;
			}
			if (duichen(a))break;
			size--;
		}
		cout<<size<<endl;

	}
	return 0;
}
