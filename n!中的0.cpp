#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	const int Factor=1000;
	int zeros[Factor],a[2568]={1};
	double bitnum=1.0;
	for (int n=2,beg=0,e=0;n<=Factor;n++)
	{
		e = bitnum +=log10(n*1.0);
		while (a[beg]==0) beg++;
		for (int j=beg,t=0;j<e;j++,t/=10)
		{
			a[j]=(t +=n*a[j])%10;
		}
		zeros[n]=count(a+beg,a+e,0)+beg;
	}
	int tem;
	while (cin>>tem)
	{
		cout<<zeros[tem]<<endl;
	}
	return 0;
}
