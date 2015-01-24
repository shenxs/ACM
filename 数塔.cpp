#include<iostream>
#include<string.h>
using namespace std;
int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int n;
int a[105][105];
int d[105][105];
int fun(int i,int j)
{
    if(i==n) return a[i][j];
    else
    {
        if(d[i][j]>0) return d[i][j];
        else
        {
            d[i][j]=a[i][j]+max(fun(i+1,j),fun(i+1,j+1));
            return d[i][j];
        }
    }
}
int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        memset(d,-1,sizeof(d));
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                cin>>a[i][j];
        }
        cout<<fun(1,1)<<endl;

    }
    return 0;
}


