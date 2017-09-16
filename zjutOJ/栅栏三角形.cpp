#include <iostream>
using namespace std;
int main()
{
	int a;
	char c;
	int m=0;
	while (cin>>c>>a)
	{
		if (m!=0) cout<<endl;
		else m++;
		for (int line=1;line<=a;line++)
		{
			for (int i=1;i<=a-line;i++)
			{
				cout<<" ";
			}
			if (line!=a)
			{
				for (int i=1;i<=2*line-1;i++)
				{
					if (i%2==1) cout<<c;
					else cout<<" ";
				}
			}
			else 
			{
				for (int i=1;i<=2*line-1;i++)
				{
					cout<<c;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
