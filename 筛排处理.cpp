#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<set>
using namespace std;
int main()
{
	int n,m,b,c;
	for(;cin>>n&&n!=0;)
	{
		b=0;
		set<int>a;
		for(;n--;)
		{
			cin>>m;
			a.insert(m);
		}
		set<int>::iterator x,y;
		y=a.end();
        c=a.size();
		cout<<c<<endl;
		for(x=a.begin();x!=y;x++)
		{   
			cout<<*x;
			b++;
			if(b%10!=0 && b!=c) cout<<" ";
			else if(b%10==0 && b!=c) cout<<endl;
		}
		cout<<endl;
		cout<<endl;
	}
	if(n==0) 
	{
		cout<<"0"<<endl;
	}
	return 0;
}