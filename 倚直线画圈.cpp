#include<iostream>
using namespace std;
int main()
{
	char a;
	int b,c,m=0;
	while (cin>>a>>b>>c)
	{
		if (m==1) cout<<endl;
		else m=1;
		if (b==0&&c==0) break;
		for (int i=1;i<=b;i++)
		{
			cout<<"B";
			for (int tem=1;tem<=b;tem++)
			{
				cout<<" ";
			}
			for (int tem=1;tem<=c;tem++)
			{
				cout<<a;
			}
			cout<<endl;
		}
		for (int i=1;i<=c;i++)
		{
			cout<<"B";
			for (int tem=1;tem<=b;tem++)
			{
				cout<<a;
			}
			for (int tem=1;tem<=c;tem++)
			{
				cout<<" ";
			}
			for (int tem=1;tem<=b;tem++)
			{
				cout<<a;
			}
			cout<<endl;
		}
		for (int i=1;i<=b;i++)
		{
			cout<<"B";
			for (int tem=1;tem<=b;tem++)
			{
				cout<<" ";
			}
			for (int tem=1;tem<=c;tem++)
			{
				cout<<a;
			}
			cout<<endl;
		}
	}
	return 0;
}
