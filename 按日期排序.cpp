#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool bijiao(string a,string b)
{
	string c,d,e,f,g,h;
	c=a.substr(6,4);
	d=b.substr(6,4);
    e=a.substr(0,2);
	f=b.substr(0,2);
    g=a.substr(3,2);
	h=b.substr(3,2);
	if(c>d) return false;
	else
	{
		if(c<d) return true;
		else
		{
			if(e>f) return false;
			else
			{
				if(e<f) return true;
				else
				{
					if(g>h) return false;
					else return true;
				}
			}
		}
	}
}
int main()
{
	int b;
	string s;
	vector<string>a;
	for(;cin>>s;)
	{
		a.push_back(s);
	}
	sort(a.begin(),a.end(),bijiao);
	b=a.size()-1;
	for(int n=0;n<=b;n++)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}



