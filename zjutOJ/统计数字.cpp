#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int g,h,c,d;
	string s;
	vector<int>a;
	vector<int>b;
	cin>>g;
	for(;cin>>s&&g>0;g--)
	{  
		a.clear();
		b.clear();
		int n=0;
		for(;n<=9;n++)
		{		
			a.push_back(0);
			b.push_back(n);
		}
		h=0;
		d=0;
	    c=s.length()-1;
	    for(;d<=c;d++)
		{
		    int e=0;
			h+=s[d]-'0';
			for(;e<=9;e++)
			{
			    if((s[d]-'0')==b[e]) a[e]+=1;
			}
		}
	    int f=0;
	    for(;f<=9;f++)
		{
		     if(a[f]!=0) cout<<f<<':'<<a[f]<<endl;
		}
		cout<<h<<endl;
		if(g>1) cout<<endl;
	}
	return 0;
}
