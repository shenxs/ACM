#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
string s[10005],t[10005];
bool my(const string&s,const string&t)
{
int ls=s.length(),lt=t.length();
int len=(ls<lt?ls:lt);
for(int i=0;i<len;++i)
if(tolower(s[i])!=tolower(t[i]))
return tolower(s[i])<tolower(t[i]);
if(ls!=lt)
return ls<lt;
}
int main()
{
int x=0,y=0;
for(string a,b;cin>>a>>b&&a!="\n"&&b!="\n";)
{
(b=="Dir"?s[x++]=a:t[y++]=a);
}
sort(s,s+x,my);
sort(t,t+y,my);
for(int i=0;i<x;i++)
cout<<s[i]<<" Dir\n";
for(int j=0;j<y;j++)
cout<<t[j]<<" File\n";
return 0;
}
