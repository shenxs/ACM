#include<iostream>
using namespace std;
int main()
{
	int a[18]={1};
	int i,k,num,t;
	for (i=1;i<18;i++) a[i]=2*a[i-1];
	//for (i=0;i<18;i++) cout<<a[i];
	while (cin>>num)
	{
		int b[18]={0};
		for (t=0;t<18;t++) b[t]=0;
		//for (t=0;t<18;t++) cout<<b[t];

		cout<<num<<":"<<endl;
		for (k=17;k>=0;k--) 
		{
			if (a[k]<=num) 
			{
				b[k]=a[k];
				num-=a[k];
			}
		}
		//for (t=0;t<18;t++) cout<<b[t];
		for (i=0;i<18;i++) 
			if (b[i]>0) cout<<"  "<<b[i]*0.05<<"kg"<<endl;

	}
	return 0;

}