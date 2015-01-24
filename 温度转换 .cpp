#include<iostream>
using namespace std;
int main()
{
	cout.precision(1);
	double a;
	for (int n;cin>>n&&n!=999;)
	{
		a=1.8*n+32;
		cout<<fixed<<a<<endl;

	}
	return 0;
}