#include <iostream>
using namespace std;
char a[1005][1005];
int main()
{
	int n;
	int R,C;
	cin>>n;
	while(n--)
	{
		bool f;
		cin>>R>>C;
		for (int i=1;i<=R;i++)
		{
			for (int j=1;j<=C;j++)
			{
				cin>>a[i][j];
			}
		}
		for (int i=1;i<=R;i++)
		{
			for (int j=1;j<=C;j++)
			{
				if (a[i][j]=='0')
				{
					if (a[i+1][j-1]=='0') 
					{
						f=true;
					}
					else f=false;
				    goto A;
				}
			}
		}
		A:
		if (f==false)  cout<<"Left hand."<<endl;
		else cout<<"Right hand."<<endl;
	}
	return 0;
}
