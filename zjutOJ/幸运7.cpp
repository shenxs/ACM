#include<iostream>
using namespace std;
int a[10000][7]={0};
int main()
{
	int n;
	int d=0;
	for (int i=1900;i<3000;i++)
	{
		for (int t=0;t<7;t++)a[i][t]=a[i-1][t];
		for (int m=1;m<=12;m++)
		{
			a[i][d]+=1;
			switch(m)
			{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:d+=31;break;
				case 2: 
				if (i%400==0||(i%100!=0&&i%4==0)) d+=29;
				else d+=28;
				break;
				case 4:
				case 6:
				case 9:
				case 11: d+=30;break;
			}
			d=d%7;
		}
	}
	while (cin>>n)
	{
		for (int i=1;i<7;i++)
		cout<<a[n+1899][i]<<" ";
		cout<<a[n+1899][0]<<endl;
	}
	return 0;
}
