#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,y,x,m,d,e,f;
	for(;cin>>n>>m&&n!=0&&m!=0;)
	{
		d=n;
		e=m;
		vector<int>a;
		vector<int>b;
		vector<int>c;
		for(;n--;)
		{
	     	cin>>x;
	    	a.push_back(x);
		}
		for(;m--;)
		{
			cin>>y;
			b.push_back(y);
		}
		for(int g=0;g<=a.size()-1;g++)
		{
			f=1;
			for(int h=0;h<=b.size()-1;h++)
			{
				if(a[g]==b[h]) 
				{
					f=0;
					break;
				}
			}
			if(f==1) 
			{
				c.push_back(a[g]);
			}
		}
		if(c.size()==0) cout<<"NULL"<<endl;
		else 
		{
			sort(c.begin(),c.end());
			for(int j=0;j<=c.size()-1;j++)
			{
				cout<<c[j];
				if(j!=c.size()-1) cout<<" ";
				else if(j==c.size()-1) cout<<endl;
			}
		}	
	}
	return 0;
}