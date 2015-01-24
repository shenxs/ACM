#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int m=0;
	while (cin>>a>>b)
	{
		if (m>0) cout<<endl;
		m++;
		for (int line=0;line<b;line++)
		{
			for (int i=0;i<a+line;i++)
				cout<<'A';
			cout<<endl;
		}
	}
	return 0;
}