#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n,h;
	char c;
	cin>>n;
	for (int cas=1;cas<=n;cas++)
	{
		if (cas!=1) cout<<"\n";
		cin>>c>>h;
		for (int i=1;i<=h/6+1;i++) cout<<" ";
		for (int i=1;2*i<=h-2;i++) cout<<c;
		cout<<"\n";
		for (int j=1;2*j<=h-3;j++) 
		{
			for (int i=1;i<=h/6+1;i++) cout<<c;
			for (int i=1;2*i<=h-2;i++) cout<<" ";
			for (int i=1;i<=h/6+1;i++) cout<<c;
			cout<<"\n";
		}
		for (int i=1;i<=h/6+1;i++) cout<<" ";
		for (int i=1;2*i<=h-2;i++) cout<<c;
		cout<<"\n";
		for (int j=1;2*j<=h-2;j++)
		{
			for (int i=1;i<=h/6+1;i++) cout<<c;
			for (int i=1;2*i<=h-2;i++) cout<<" ";
			for (int i=1;i<=h/6+1;i++) cout<<c;
			cout<<"\n";
		}
		for (int i=1;i<=h/6+1;i++) cout<<" ";
		for (int i=1;2*i<=h-2;i++) cout<<c;
		cout<<"\n";
	}
	return 0;
}