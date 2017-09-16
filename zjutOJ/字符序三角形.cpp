#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,y,x,z;
	char c;
	cin>>z>>n;
	for(;z--;)
	{
		 int m=n;
	     x=1;
		 c='A';
	     for(;m>0;m--)
		 { 
		      cout<<string(m-1,' ');
			  y=2*x-1;
	    	  for(;y--;)
			  {
				   cout<<c;
			       c=c+'1'-'0';
			  }
		      cout<<endl;
		      x++;
		 }	
	}
	return 0;
}