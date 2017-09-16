//я╟урпрткйЩ 
#include<iostream>
using namespace std;
int main()
{
	int a[4];
	while (cin>>a[1]>>a[2]>>a[3])
	{
		int i;
		if (a[1]==-1&&a[2]==-1&&a[3]==-1) return 0;
		for (i=1;i<=3;i++) 
		{
			if (a[i]<=168) 
			{
			    cout<<"CRASH "<<a[i]<<endl;
				break;
			}
		}
		if (i==4) cout<<"NO CRASH"<<endl;
		
	}
	return 0;
}
