#include<iostream>
using namespace std;
int main()
{
	int n;
	int s[500],a;
	while(cin>>n)
	{
		if (n==0) break;
		for (int i=1;i<=365;i++) s[i]=0;
		for (int i=1;i<=n;i++)
		{
			cin>>a;
			cin>>s[a];
		}
		int num=0;
		int sum=0;
		for (int i=1;i<=365;i++)
		{
			sum+=s[i];
			if (sum>=10) num++;
			if (sum>0) sum--;
		}
		cout<<num<<endl;
	}
	return 0;
}
