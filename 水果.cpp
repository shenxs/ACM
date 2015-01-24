#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
map<string,map<string,int> >p;
map<string,map<string,int> >::iterator it1;
map<string,int>::iterator it2;
int main()
{
	int n,m,num;
	string add,name;
	bool f=false;
	cin>>n;
	while (n--)
	{
		if (f==true) cout<<"\n";
		f=true;
		p.clear();
		cin>>m;
		while (m--)
		{
			cin>>name>>add>>num;
			p[add][name]+=num;
		}
		for (it1=p.begin();it1!=p.end();it1++)
		{
			cout<<it1->first<<"\n";
			for (it2=(it1->second).begin();it2!=(it1->second).end();it2++)
			{
				cout<<"   |----"<<it2->first<<"("<<it2->second<<")\n";
			}
		}
		
	}
	return 0;
}
