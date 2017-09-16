#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int d;
	char c='a';
	vector<int>a;
	vector<char>b;
	int n=0;
	for(;n<=25;n++)
	{		
		a.push_back(0);
		b.push_back(c);
        c=c+'1'-'0';
	}
	for(;cin>>c&&c!='#';)
	{ 
		d=0;
		for(;d<=25;d++)
		{
		    if(b[d]==c) a[d]+=1;
		}
		
	}
   int f=0;
   for(;f<=25;f++)
   {
	    cout<<b[f]<<' '<<a[f]<<endl;
   }
   return 0;
}
