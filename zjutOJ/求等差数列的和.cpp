#include<iostream>
using namespace std;
int main()
{
	int a1,a2,d,n,s;
	while (a1!=0||a2!=0||d!=0)
	{
		cin>>a1>>a2>>d;
		n=(a2-a1)/d+1;
		s=(a1+a2)*n/2;
		cout<<s<<endl;

	}
	return 0;
}