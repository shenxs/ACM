#include<iostream>
using namespace std;
int main()
{
	for(int n;cin>>n;)
	{
		if (n<=5)
		{
			switch(n)
			{
			case 1:cout<<"Sheldon"<<endl;break;
			case 2:cout<<"Leonard"<<endl;break;
			case 3:cout<<"Penny"<<endl;break;
			case 4:cout<<"Rajesh"<<endl;break;
			case 5:cout<<"Howard"<<endl;break;
			}
		}
		else
		{
		    int i=5,t=1,people=0;
	    	while (i<n)
			{
				n=n-i;
		    	i*=2;
		    	t*=2;
			}
			//cout<<"n="<<n<<endl;
			//cout<<"i="<<i<<endl;
			//cout<<"t="<<t<<endl;
			while (n>0)
			{
				n-=t;
				people++;
			}
			
			switch(people)
			{
			case 1:cout<<"Sheldon"<<endl;break;
			case 2:cout<<"Leonard"<<endl;break;
			case 3:cout<<"Penny"<<endl;break;
			case 4:cout<<"Rajesh"<<endl;break;
			case 5:cout<<"Howard"<<endl;break;	
			}
		}
	}
	return 0;
			
}