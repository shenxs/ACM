#include<iostream>
using namespace std;
int main()
{
	int n,m;
	char c;
	for(;cin>>n>>m && (n!=0 && m!=0);)
	{
		int b=0;
		int a=n*m;
		for(;a--;)
		{
			cin>>c;
			if(c=='*') b+=1;
		}
		cout<<b<<endl;
	}
	return 0;
}

