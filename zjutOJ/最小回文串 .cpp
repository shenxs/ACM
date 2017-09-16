#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t,a[27],tem,flag;
	string s;
	scanf("%d",&t);
	while (t--)
	{
		memset(a,0,sizeof(a));
		cin>>s;
		for (int i=0;i<s.length();i++)a[s[i]-64]++;
		tem=flag=0;
		for (int i=1;i<=26;i++)
		{
			if (a[i]%2) 
			{
				flag=i;
				tem++;
			}
			if (tem>=2) 
			{
				printf("Sorry\n");
				goto A;
			}
		}
		a[flag]--;
//		for (int i=1;i<=26;i++) cout<<a[i]<<endl;
		for (int i=1;i<=26;i++)
		{
			for (int j=1;j<=a[i]/2;j++)
			{
				printf("%c",i+64);
			}
		}
		if (flag!=0) printf("%c",flag+64);
		for (int i=26;i>=1;i--)
		{
			for (int j=1;j<=a[i]/2;j++)
			{
				printf("%c",i+64);
			}
		}
		printf("\n");
		A:;
	}
	return 0;
}