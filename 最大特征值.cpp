#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	int dp[2000];
	while (n--)
	{
		int tem=-13;
		cin>>s;
		for (int i=0;i<s.length();i++)
		{
			dp[i]=s[i]-78;
			dp[i]=max(dp[i],dp[i-1]+dp[i]);
			if (tem<dp[i]) tem=dp[i];
		}
		cout<<tem<<endl;
	}
	return 0;
}
