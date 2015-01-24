#include <iostream>
using namespace std;
int main()
{
	int c,n,i;
	cout.precision(3);
	cout<<fixed;
	cin>>c;
	for (int num=1;num<=c;num++)
	{
		cin>>n;
		double s=0;
		for (int t=1;t<=n;t++) 
		{
			cin>>i;
			s+=i;
		}
		cout<<s/n<<endl;
	}
	return 0;
}
