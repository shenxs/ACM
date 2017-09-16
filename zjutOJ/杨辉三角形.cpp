#include<iostream>
#include<iomanip>
using namespace std;
int tem(int a,int b)
{		
	int t=1;
	for (int i=1;i<=b;i++) t=t*(a+1-i)/i;
	return t;
}

int main()
{
	for(int i,n,m=0;cin>>n;)
	{

		if (m==1) cout<<endl;
		int item;
		for (int line=0;line<=n-1;line++)
		{
		    for (i=1;i<=n-1-line;i++) cout<<"   ";
		    for (i=0;i<=line;i++) 
			{
				item=tem(line,i);
				cout<<setw(3)<<item;
				if (i!=line) cout<<"   ";
			}
		cout<<endl;
		}
		m=1;

	}
	return 0;
}