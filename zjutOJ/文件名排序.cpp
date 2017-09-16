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
		int c=a.name.size()-1;
		int d=b.name.size()-1;
        if(c==d)
		{
			int xx=0;
			int x1;
			for(x1=0;x1<=c;x1++)
			{
				if(a.name[x1]>=65&&a.name[x1]<=90) a.name[x1]=a.name[x1]+32;
				if(b.name[x1]>=65&&b.name[x1]<=90) b.name[x1]=b.name[x1]+32;
				if(a.name[x1]<b.name[x1])
				{
					xx=1;
					break;
				}
				else if(a.name[x1]>b.name[x1])
				{
					break;
				}
			}
			if(xx==0) return false;
			else return true;
		}
		if(c<d)
		{
			int xxx=0;
			int x2;
			for(x2=0;x2<=c;x2++)
			{
				if(a.name[x2]>=65&&a.name[x2]<=90) a.name[x2]=a.name[x2]+32;
				if(b.name[x2]>=65&&b.name[x2]<=90) b.name[x2]=b.name[x2]+32;
				if(a.name[x2]<b.name[x2])
				{
					xxx=1;
					break;
				}
				else if(a.name[x2]>b.name[x2])
				{
					break;
				}
			}
			if(xxx==0 && x2!=c+1) return false;
			else return true;
		}
        if(c>d)
		{
			int x4=0;
			for(int x3=0;x3<=d;x3++)
			{
				if(a.name[x3]>=65&&a.name[x3]<=90) a.name[x3]=a.name[x3]+32;
				if(b.name[x3]>=65&&b.name[x3]<=90) b.name[x3]=b.name[x3]+32;
				if(a.name[x3]<b.name[x3])
				{
					x4=1;
					break;
				}
				else if(a.name[x3]>b.name[x3])
				{
					break;
				}
			}
			if(x4==0) return false;
		}
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