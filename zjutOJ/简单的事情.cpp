#include<iostream>
using namespace std;
int main()
{
	int n,m,t;
	while (cin>>n>>m)
	{
		t=1;
		for (int i=1;i<=m;i++) t=t*(n+1-i)/i;
		cout<<t<<endl;
	}
	return 0;
}