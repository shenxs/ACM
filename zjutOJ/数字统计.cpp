#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int c,d;
	string s;
	vector<int>a;
	vector<int>b;
	for(;cin>>s;)
	{  
		a.clear();
		b.clear();
		int n=0;
		for(;n<=9;n++)
		{		
			a.push_back(0);
			b.push_back(n);
		}
		d=0;
	    c=s.length()-1;
	    for(;d<=c;d++)
		{
		    int e=0;
			for(;e<=9;e++)
			{
			    if((s[d]-'0')==b[e]) a[e]+=1;
			}
		}
	    int f=0;
	    for(;f<=9;f++)
		{
		     if(a[f]!=0) cout<<f<<' '<<a[f]<<endl;
		}
		cout<<endl;
	}
	return 0;
}