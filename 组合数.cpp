#include<iostream>
using namespace std;
int main()
{
	int n,m,i;
	double s;
	while (cin>>n>>m)
	{
		s=1;
		for (i=1;i<=m;i++) s=s*(n+1-i)/i;
		cout<<int (s)<<endl;
	}
	return 0;
}
