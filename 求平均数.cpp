#include<iostream>
using namespace std;
int main()
{
	cout.precision(2);
	int num=0;
	double sum=0;
	for (int n;cin>>n;)
	{
		num+=1;
		sum+=n;

	}
	double t=sum/num;
	cout<<fixed<<t<<endl;
	return 0;
}