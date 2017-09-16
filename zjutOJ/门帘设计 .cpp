#include<iostream>
using namespace std;
int main()
{
	char a;
	int m,n;
	int t=0;
	while (cin>>a>>m>>n)
	{
		if (t>0)cout<<endl;
		t++;
		for (int line=1;line<=m;line++)
		{
			for (int row=1;row<=29;row++)
			{
				if(row%2==0)cout<<" ";
				else if (line<=n) cout<<a;
				else if (row%4==1) cout<<a;
				else cout<<" ";
			}
			cout<<endl;
		}
		
	}
	return 0;
}