#include<iostream>
#include<string.h>
using namespace std;
int  dp[2010][2010];
int main()
{
        int n;memset(dp,0,sizeof(dp));dp[1][1]=1;
        for(int i=2;i<=2005;i++)
        {
            for(int j=1;j<=i;j++)
            {
                dp[i][j]=(dp[i-1][j]*(j)+dp[i-1][j-1])%1000;
            }
        }
        int line;
        int answer[2005];
        memset(answer,0,sizeof(answer));
        for(n=1;n<2005;n++)
        {
             for(int i=1;i<=n;i++)
                answer[n]+=dp[n][i];
        }

        cin>>line;
        while(line--)
        {
            cin>>n;
            cout<<answer[n]%1000<<endl;

        }
    return 0;
}
