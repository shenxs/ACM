#include <iostream>
using namespace std;
int main()
{
	int n;
	int m=0;
	while (cin>>n&&n)
	{
		if (m!=0) cout<<endl;
		else m++;
		for (int i=1;i<=n;i++)
		{
			for (int j=1;j<=n;j++)
			{
				cout<<n;
			}
			cout<<endl;
		}
	}
	return 0;
}
