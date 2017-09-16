#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b;
	for(;cin>>a>>b&&a!="#"&&b!="#";)
	{
		int n=a.length();
		int x=b.length();
		int y=0;
		for(int m=0;m<=n-1;m++)
		{
			if(a.substr(m,x)==b)
			{
				y++;
				m+=x-1;
			}
		}
		cout<<y<<endl;
	}
	return 0;
}
