#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	bool a[10];
	int t1,t2,t3;
	for (t1=100;t1<=333;t1++)
	{
		memset(a,0,sizeof(a));
		t2=2*t1;
		t3=3*t1;
		a[t1%10]=a[t1/100]=a[t1%100/10]=a[t2%10]=a[t2/100]=a[t2%100/10]=a[t3%10]=a[t3/100]=a[t3%100/10]=1;
		if (a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]==9)cout<<t1<<" "<<t2<<" "<<t3<<endl;
	}
	return 0;
}