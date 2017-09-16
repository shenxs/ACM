#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
bool bijiao(string s1,string s2)
{
	string a1,a2,b1,b2;
	a1=s1;
	a2=s2;
	reverse(a1.begin(),a1.end());
	reverse(a2.begin(),a2.end());
	string::iterator it;    
	for (it =a1.begin(); it != a1.end(); ++it)  
	{          
		if( *it == '0')  
		{       
			a1.erase(it);
		} 
		if(*it!='0') break;
    }
    for (it =a2.begin(); it != a2.end(); ++it)  
	{          
		if( *it == '0')  
		{       
			a2.erase(it);
		} 
		if(*it!='0') break;
    }
	if(a1.length()<a2.length()) return true;
	else if(a1.length()==a2.length()&& a1<a2) return true;
	else return false;
}
int main()
{
	int n,m,a,e;
	string s1;
	vector<string>s;
    for(;cin>>n;)
	{
		for(;n--;)
		{
			cin>>m;
			a=m;
			s.clear();
			for(;m--;)
			{	
				cin>>s1;
				s.push_back(s1);
			}
			sort(s.begin(),s.end(),bijiao);
			e=0;
			for(;a--;e++)
			{
				if(a==0) cout<<s[e];
				else cout<<s[e]<<' ';	
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
