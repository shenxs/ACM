#include<iostream>
using namespace std;
void main()
{
	int n; 
	while(cin>>n) 
	{ 
		int i,a[32],s; 
		s=n;  
		if(n>=0)  
			for(i=0;i<32;i++)
			{   
				a[i]=n%2;  
				n=n/2;  
			} 
			else 
			{   
				n=-n;  
				for(i=0;i<32;i++)
				{   
					a[i]=n%2; 
					n=n/2;   
				}  
				for(i=0;i<32;i++) 
				{  
					if(a[i]==1)  
					{   
						for(i=i+1;i<32;i++) 
						{     
							if(a[i]==1)    
								a[i]=0;    
							else    
								a[i]=1;    
						}   
					} 
				}
			}
			for(i=31;i>=0;i--)  
				cout<<a[i];  
			cout<<"  "<<s<<endl; 
	}
}
