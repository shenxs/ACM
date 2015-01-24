#include<iostream>
using namespace std;
struct hero
{
    int dps;
    int hp;
    double bi;
};
int main()
{
    int n;
    while(cin>>n)
    {
        hero*a=new hero [n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i].dps>>a[i].hp;
            a[i].bi=(double(a[i].dps)/a[i].hp);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(a[i].bi<a[j].bi)
                {
                    swap(a[i].bi,a[j].bi);
                    swap(a[i].dps,a[j].dps);
                    swap(a[i].hp,a[j].hp);
                }
            }
        }//ÅÅÐò
        int lost=0;
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i].dps;
        for(int i=0;i<n;i++)
        {
            for(int j=a[i].hp;j>0;j--)
            {
                lost+=sum;
            }
            sum-=a[i].dps;
        }
        cout<<lost<<endl;



        delete []a;
    }

    return 0;
}
