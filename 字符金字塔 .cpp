#include <iostream>
using namespace std;
int main()
{
	char c;
	int n;
	int m=0;
	while (cin>>n&&n)
	{
		if (m!=0)cout<<endl;
		else m++;
		for (int line=1;line<=n;line++)
		{
			c=line+64;
			for (int i=1;i<=n-line;i++)
			{
				cout<<" ";
			}
			for (int i=1;i<=2*line-1;i++)
			{
				cout<<c;
			}
			cout<<endl;
		}
	}
	return 0;
}
