#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int x1,y1,x2,y2,x,y;
	int i[100],j[100];
	double a,b,c;
	int m=0;
	while (cin>>n&&n!=0)
	{
		if (m==1)cout<<endl;
		else m=1;
		int tem=1;
		cin>>x1>>y1>>x2>>y2;
		a=y2-y1;
		b=x1-x2;
		c=y1*x2-x1*y2;
//		cout<<a<<" "<<b<<" "<<c<<endl;
		int k=1<<30;
		for (int num=1;num<=n;num++)
		{
			cin>>x>>y;
			if (abs(a*x+b*y+c)<k)
			{
				 tem=1;
			     k=abs(a*x+b*y+c);
			     i[tem]=x;
			     j[tem]=y;
			  //   cout<<k<<" ";
		    }
		    else if (abs(a*x+b*y+c)==k)
		    {
		    	tem++;
		    	i[tem]=x;
		    	j[tem]=y;
		    }
		}
		for (int s=1;s<=tem;s++)
		cout<<i[s]<<" "<<j[s]<<endl;
	}
	return 0;
}
