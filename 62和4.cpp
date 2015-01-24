#include<iostream>
using namespace std;
bool jilu[1000005];
bool fun(int i)
{
    int k=i;
    while(k)
    {
        if(k%10==4||k%100==62)
            return true;
        else
            k/=10;
    }
    return false;
}
int main()
{
    int m,n;

    for(int i=1;i<=1000005;i++)
    {
        if(fun(i))
            jilu[i]=1;

    }

    while(cin>>n>>m&&m>=n&&!(n==0&&m==0))
    {
        int x=0;
        for(int i=n;i<=m;i++)
        {
            if(jilu[i])
                x++;
        }
       cout<<(m-n+1)-x<<endl;
    }
    return 0;
}
