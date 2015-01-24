#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,m,s;
	char c;
	for(;cin>>n>>m>>c>>s;)
	{
		for(;n--;)
		{
			int d=m;
		    for(;d>0;d--)
			{
			     cout<<c;
			     if(d!=1) cout<<string(s,' ');
			     if(d==1) cout<<endl;
			}
			int e=s;
	        if(n>0)
			{
		        for(;e>0;e--)
				{
		             cout<<endl;
				}
			 }
		}  
        cout<<endl;
	}
	return 0;
}
