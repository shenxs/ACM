#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,n,x,y,z;
	a=7;
	b=3;
	c=1;
	for(;cin>>n;)
	{
		d=0;
		for(x=0;x<=n/a;x++)
		{
		    for(y=0;y<=n/b;y++)
			{
			    for(z=0;z<=n/c;z++)
				{
			        if(a*x+b*y+c*z==n)
					{
					    d++;
					}
				}
			}
		}
        cout<<d<<endl;
	}
    return 0;
}