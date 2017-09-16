#include<iostream>
using namespace std;
int main()
{
	for(int a,b,c;cin>>a>>b>>c;)
	{
		int sum;
		if (b==1||b==2)
		{
			b=b+12;
			a--;
		}
		sum=c+2*b+3*(b+1)/5+a+a/4-a/100+a/400+1;
		sum=sum%7;
		switch(sum)
		{
		case 1:cout<<"Monday"<<endl;break;
		case 2:cout<<"Tuesday"<<endl;break;
		case 3:cout<<"Wednesday"<<endl;break;
		case 4:cout<<"Thursday"<<endl;break;
		case 5:cout<<"Friday"<<endl;break;
		case 6:cout<<"Saturday"<<endl;break;
		case 0:cout<<"Sunday"<<endl;break;
		}

	}
	return 0;
}