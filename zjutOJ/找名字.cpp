#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n,d,e,a1,b1;
	string s1;
	string s2;
	cin>>n;
	for(;n--;)
	{
	    getline(cin,s1);
		if(s1.empty()) getline(cin,s1);
    	getline(cin,s2);
		if(s2.empty()) getline(cin,s2);
		d=0;
		e=0;
		a1=s1.size()-1;
		b1=s2.size();
		for(;d<=a1;)
		{
			if(s1.substr(d,b1)==s2) 
			{
				e++;
				d+=b1;
			}
			else d++;
		}
		cout<<e<<endl;
	}
	return 0;
}
