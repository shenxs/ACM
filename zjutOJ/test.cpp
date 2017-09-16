#include <iostream>
using namespace std;
int main()
{
	int n;
	int a[1000];
	while (cin>>n)
	{
		int tem=0;
		for (int i=1;i<=n;i++) cin>>a[i];
		int num=n;
		while (num!=0)
		{
			tem++;
			int max=1<<30;
			for (int i=1;i<=n;i++)
			{
				if (a[i]<=max&&a[i]>0)
				{
					max=a[i];
					a[i]=-1;
					num--;
				}
			}
		}
		cout<<tem<<endl;
	}
	return 0;
}
