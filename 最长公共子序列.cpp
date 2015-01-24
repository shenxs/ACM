#include<iostream>
#include<string.h>
#include<string>
using namespace std;
#define max(a,b) (a)>(b)? (a):(b);
int dp[1010][1010];
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        memset(dp,0,sizeof(dp));
        int len1=a.length();
        int len2=b.length();
        for(int i=0;i<len1;i++)
            for(int j=0;j<len2;j++)
        {
            if(a[i]==b[j]) dp[i+1][j+1]=dp[i][j]+1;
            else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);

        }

     cout<<dp[len1][len2]<<endl;
    }
}
