#include<iostream>
using namespace std;
int main()
{
	for (int a,b;cin>>a>>b;)
	{

		if (a==-1&&b==-1) break;
		int tem;
		while (a!=0)
		{
            tem=b%a;
			b=a;
			a=tem;
		}
		if (b==1) cout<<"YES"<<endl;
		else cout<<"POOR Haha"<<endl;
	}
	return 0;
}