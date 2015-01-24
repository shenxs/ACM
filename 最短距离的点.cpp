#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i[1000],j[1000];
	int a,b;
	int x,y;
	cin>>a>>b;
	int k=1<<30;
	int tem=1;
	while (cin>>x>>y)
	{
		if (k>(a-x)*(a-x)+(b-y)*(b-y)) 
		{
			tem=1;
			k=(a-x)*(a-x)+(b-y)*(b-y);
			i[tem]=x;
			j[tem]=y;
		}
		else if (k==(a-x)*(a-x)+(b-y)*(b-y))
		{
			tem++;
			i[tem]=x;
			j[tem]=y;
		}
	}
	for (int t=1;t<=tem;t++)
	{
		cout<<i[t]<<" "<<j[t]<<endl;
	}
	return 0;
}
