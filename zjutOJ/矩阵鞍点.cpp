#include<iostream>
using namespace std;
int main()
{
	for (int a,b;cin>>a>>b;)
	{
		bool m=false;
		int k[200][200],i,j;
		for (i=1;i<=a;i++)
		{
			for (j=1;j<=b;j++) 
				cin>>k[i][j];
		}
		for (i=1;i<=a;i++)
		{	
		    bool f=true;
	    	int n=1;
			for (j=1;j<=b;j++) 
			{
				if (k[i][j]>k[i][n]) n=j;
			}
			for (int t=1;t<=a;t++)
				if (k[t][n]<k[i][n]) f=false ;
			if (f==true) m=true;
		}
		for (i=1;i<=a;i++)
		{	
		    bool f=true;
	    	int n=1;
			for (j=1;j<=b;j++) 
			{
				if (k[i][j]<k[i][n]) n=j;
			}
			for (int t=1;t<=a;t++)
				if (k[t][n]>k[i][n]) f=false ;
			if (f==true) m=true;
		}
		if (m==true)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
