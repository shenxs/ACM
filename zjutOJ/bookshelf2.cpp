#include<iostream>
#include<string.h>
using namespace std;
int dp[20000007];
int main()
{
    int n;int height;
    while(cin>>n>>height)
    {
        memset(dp,0,sizeof(dp));
        int*cow=new int [n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
             cin>>cow[i];
             sum+=cow[i];
        }
        for(int i=1;i<n;i++)
        {
            for(int k=sum;k>=cow[i];k--)
                dp[k]=max(dp[k],dp[k-cow[i]]+cow[i]);
        }
        for(int i=1;i<=sum;i++)
        {
            if(dp[i]>0)
            {
                cout<<dp[i]-height<<endl;
                break;
            }
        }

        delete []cow;
    }
    return 0;
}
