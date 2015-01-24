#include<iostream>
using namespace std;
int main()
{
	int a,b;
	for(;cin>>a>>b;)
	{
		if(a+b>10) cout<<"Refuse"<<endl;
		else cout<<a+b<<endl;
	}
	return 0;
}