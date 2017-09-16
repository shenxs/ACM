#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int m,x;
	vector<int>a;
	vector<int>b;
	vector<int>c;	
	int n=0;
	for(;n<=99;n++)
	{
		a.push_back(0);
		b.push_back(n);
	}
	for(;cin>>m;)
	{    
		int y=0;
		x=m%100;
		for(;y<=99;y++)
		{
			if(x==b[y]) a[y]+=1;
		}
	}
	for(int x1=0;x1<=99;x1++)
	{
		int x2=0;
		int z=0;
	    for(;z<=99;z++)
		{		
		     if(a[x1]<a[z]) 
			 {
				 x2=1;
			 }
		}
		if(x2==0) c.push_back(x1);
	}
	int d=0;
	for(;d<=c.size()-1;d++)
	{
		cout<<c[d]<<endl;		
	}
	return 0;
}