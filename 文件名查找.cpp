#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a[1000],b[1000];
	int m,n,t;
	cin>>m>>n;
	for (int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	
	for (int i=0;i<n;i++)
	{
		cin>>b[i];
		int num=0;
		for (int k=0;k<m;k++)
		{
			
			for (t=0;t<b[i].length();t++)
			{
				if (b[i][t]!=a[k][t]) break;
			}
			if (t==b[i].length()) num++;
			
		}
		
	    cout<<num<<endl;
		
	}
	
	return 0;
}
