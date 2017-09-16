#include<iostream>
using namespace std;
int main()
{
	double x,k;
	while (cin>>x)
	{
		double sum=1,i=2,a=1;
		k=x;
		while(k>=1e-6)
		{
			sum+=a*k;
			k=k*x/i;
            a=-a;
			i=i+1;
		}
        cout<<fixed<<"x="<<x<<", sum="<<sum<<endl;
	}
	return 0;
}