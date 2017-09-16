#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,n=0,x,y,z;
	vector<int>daji;
	vector<int>zhongji;
	vector<int>xiaoji;
	a=9;
	b=6;
	c=1;
	for(x=0;x<=34;x++)
	{
		for(y=0;y<=50;y++)
		{
			for(z=0;z<=300;z++)
			{
				if(a*x+b*y+c*z==300 && x+y+z==100)
				{
					daji.push_back(x);
					zhongji.push_back(y);
					xiaoji.push_back(z);
					n++;
				}
			}
		}
	}
	for(int m=0;n--;m++)
	{
		cout<<daji[m]<<' '<<zhongji[m]<<' '<<xiaoji[m]<<endl;
	}
	cout<<endl;
    return 0;
}
