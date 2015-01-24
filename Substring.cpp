#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool f(string s1,string s2)
{
	for (int i=0;i<s1.length()||i<s2.length();i++)
	{
		if (s1[i%s1.length()]<s2[i%s2.length()]) return true;
		if (s1[i%s1.length()]>s2[i%s2.length()]) return false;
	}
}
int main()
{
	int t,n;
	cin>>t;
	string s[200],tem;
	for (int num=1;num<=t;num++)
	{
		cin>>n;
		for (int i=1;i<=n;i++) cin>>s[i];
//		for (int i=1;i<n;i++)
//		{
//			int k=i;
//			for (int m=i;m<=n;m++)
//			{
//				if (s[m]<s[k]) k=m;
//			}
//			tem=s[k];
//			s[k]=s[i];
//			s[i]=tem;
//		}
	    sort(s+1,s+n+1,f);
		for (int i=1;i<=n;i++) cout<<s[i];
		cout<<endl;
	
	}
	return 0;
}
