#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int x;cin>>x;)
	{
		int n;
		if (x>0) n=x;
		if (x==0) 
		{
			cout<<"          0-->0"<<endl;
			continue;
		}
		if (x<0) n=-x;
		int i=1,a[32]={0};
		while (n!=0)
		{
			a[i]=n%2;
			n=n/2;
			i++;
		}
		cout<<setw(11)<<x<<"-->";
        if (x<0) 	cout<<"-";
		for (i=i-1;i>=1;i--)
			cout<<a[i];
		cout<<endl;
	}
	return 0;
	
}