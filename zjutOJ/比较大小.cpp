#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a>>b;
		if (a<b) cout<<"Smaller"<<endl;
		if (a==b) cout<<"Equal"<<endl;
		if (a>b) cout<<"Bigger"<<endl;
	}
	return 0;
}