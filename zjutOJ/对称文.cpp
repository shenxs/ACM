#include<iostream>
#include<string>
using namespace std;
bool duichen(char a, char b)
{
	if (a==b&&a!='<'&&a!='>'&&a!='{'&&a!='}'&&a!='['&&a!=']'&&a!='('&&a!=')') return true;
	if (a>='a'&&a<='z'&&b==a-32) return true;
	if (a>='A'&&a<='Z'&&b==a+32) return true;
	if (a=='['&&b==']') return true;
	if (a=='('&&b==')') return true;
	if (a=='{'&&b=='}') return true;
	if (a=='<'&&b=='>') return true;
	return false;


}
int main()
{
	string s;
	while (getline(cin,s))
	{
		if (s=="000000") break;
		bool f=true;
		int size=s.length();
		for (int i=0;2*i<size;i++)
		{
			if (duichen(s[i],s[size-1-i])==false) {f=false;break;}
		}
		if (f==false) cout<<"Not symmetry"<<endl;
		else cout<<"Symmetry"<<endl;
	}
	return 0;

}