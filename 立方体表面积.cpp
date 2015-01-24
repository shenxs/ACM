#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	while (cin>>a>>b>>c)
	{
		cout<<2*(a*b+a*c+b*c)<<endl;
	}
	return 0;
}
