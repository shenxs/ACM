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
	for(int i,n;cin>>n;)
	{
		int item;
		for (int line=0;line<n;line++)
		{
			for(i=0;i<=line-1;i++) cout<<"   ";
			for(i=0;i<=n-1-line;i++)
			{
				cout<<setw(3)<<tem(n-1-line,i);
		    	if (i!=n-1-line) cout<<"   ";
			}
		    cout<<endl;
		}

	}
	return 0;
}
