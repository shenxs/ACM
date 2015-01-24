#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout.precision(1);
	cout<<fixed;
	string s[1000],tem2;
	int num,i;
	double atk,spd,ct,sum[1000],tem1;
	for (int n,m=0;cin>>n&&n!=0;)
	{
		if (m>0) cout<<endl;
		else m++;
		for (num=0;num<n;num++) 
		{
			cin>>s[num]>>atk>>spd>>ct;
			sum[num]=atk*spd*60*(1+ct);
		}
		for (i=n-1;i>0;i--)
		{
			for (num=0;num<i;num++)
			{
				if (sum[num]<sum[num+1]||(sum[num]==sum[num+1]&&s[num]<s[num+1]))
				{
					tem1=sum[num];
					sum[num]=sum[num+1];
					sum[num+1]=tem1;
					tem2=s[num];
					s[num]=s[num+1];
					s[num+1]=tem2;
				}
			}
		}
		for (num=0;num<n;num++) cout<<s[num]<<" "<<sum[num]<<endl;
	}
	return 0;
}