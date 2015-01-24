#include <iostream>
using namespace std;
double s[200][200]={0};
void f(int k,int l)
{
	for (int i=0;i<=100;i++)
	{
		for (int j=0;j<=100;j++)
		{
			s[i][j]=0;
		}
	}
	double sum=0;
	for (int i=1;i<=k+1;i++)
	{
		s[i][0]=1;
	}
	for (int t=1;t<l;t++)
	{
			for (int i=1;i<=k+1;i++)
			{
				s[i][t]=(s[i][t-1]+s[i-1][t-1]+s[i+1][t-1]);
				s[i][t]=s[i][t]/(k+1);
			}
	}
//	for (int t=1;t<l;t++)
//	{
//			for (int i=1;i<=k+1;i++)
//			{
//				cout<<s[i][t]<<" ";
//			}
//			cout<<endl;
//	}
	for (int i=1;i<=k+1;i++)
	{
		sum+=s[i][l-1]/(k+1);
	}
//	cout<<sum<<endl;
//	for (int i=1;i<=l;i++) sum=sum/(k+1);
	cout<<sum*100<<endl;
}
int main()
{
	cout.precision(5);
	cout<<fixed;
	int k,l;
	while (cin>>k>>l)
	{
		f(k,l);
	}
	return 0;
}
