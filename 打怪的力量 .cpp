#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t[10000];
	int n;
	cin>>n;
	for (int num=0;num<n;num++)
	{
		int i,m,a,b,c,d,e;
		cin>>m;
		for (i=0;i<m;i++)cin>>t[i];
		sort(t,t+i);
		cin>>a>>b>>c>>d>>e;
		int time=0;
		while (1)
		{
			time+=a+b;
			d+=t[i-1];
			i--;
			if (time>c||(i<0&&d<e)) {cout<<"Tyr is not so great!"<<endl;break;}
			if (d>=e){cout<<"Tyr is great!"<<endl;break;}
		}

	}
}
