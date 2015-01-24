#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,a,b,c;
	string s;
	cin>>n;
	for (int num=1;num<=n;num++)
	{
		a=0;
		b=0;
		c=0;
		cin>>s;
		for (int i=0;i<4;i++)
		{
			a=a*10+s[i]-48;
		}
		for (int i=5;i<7;i++)
		{
			b=b*10+s[i]-48;
		}
		for (int i=8;i<10;i++)
		{
			c=c*10+s[i]-48;
		}
		if (b==1||b==2) 
		{
			b=b+12;
			a=a-1;
		}
		switch((c+2*b+3*(b+1)/5+a+a/4-a/100+a/400+1)%7)
		{
			case 1:cout<<"Mon."<<endl;break;
			case 2:cout<<"Tus."<<endl;break;
			case 3:cout<<"Wed."<<endl;break;
			case 4:cout<<"Thr."<<endl;break;
			case 5:cout<<"Fri."<<endl;break;
			case 6:cout<<"Sat."<<endl;break;
			case 0:cout<<"Sun."<<endl;break;
		}
	}
	return 0;
} 
