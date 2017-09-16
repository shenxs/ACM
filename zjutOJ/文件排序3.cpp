#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
struct wenjian
{	
	string name;
	string shuxing;
};
bool bijiao(wenjian a,wenjian b)
{
	if(a.shuxing=="Dir" && b.shuxing=="File") return true;
	else if(a.shuxing=="File" && b.shuxing=="Dir") return false;
	else if((a.shuxing=="Dir" && b.shuxing=="Dir")||(a.shuxing=="File" && b.shuxing=="File"))
	{
		int c=a.name.length();
		int d=b.name.length();
        int len=(c<d?c:d);
        for(int i=0;i<len;i++)
		{
		    if(a.name[i]>=65&&a.name[i]<=90) a.name[i]=a.name[i]+32;
		    if(b.name[i]>=65&&b.name[i]<=90) b.name[i]=b.name[i]+32;
            if(a.name[i]!=b.name[i]) return a.name[i]<b.name[i];
		}
        if(c!=d)  return c<d;
	}
}
int main()
{
	wenjian s;
	vector<wenjian>a;
	for(;cin>>s.name>>s.shuxing;)
	{
		a.push_back(s);
	}
	sort(a.begin (),a.end(),bijiao);
	for(int n=0;n<=a.size()-1;n++)
		cout<<a[n].name<<' '<<a[n].shuxing<<endl;
	return 0;
}