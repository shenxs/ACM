#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int n;	
	string s,a;
	for(;cin>>n;)
	{
	    for(;cin>>s&&n>0;)
		{
           	if(s[0]=='-')
			{
	           	a=s;
	            reverse(a.begin()+1,a.end());
	           	cout<<a<<endl;
			}
            else
			{
	          	a=s;
	            reverse(a.begin(),a.end());
	           	cout<<a<<endl;
			}
			n--;
		}
	}
	return 0;
}