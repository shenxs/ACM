#include <iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	int m=0;
	while (cin>>a>>b>>c)
	{
		if (m!=0) cout<<endl;
		else m++;
		for (int line=1;line<=b;line++)
		{
			for (int k=1;k<line;k++)
			{
				cout<<" ";
			}
			for (int i=1;i<=a;i++)
			{
				cout<<c;
			}
			cout<<endl;
		}
	}
	return 0;
}
