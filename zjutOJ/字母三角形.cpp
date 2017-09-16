#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,y,x,z;
	char c;
	for(;cin>>n&&n!=0;)
	{
		int m=n;
        x=1;
	    for(;m>0;m--)
		{ 
			 c='A';
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