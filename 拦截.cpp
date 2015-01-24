#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int*a=new int [n];
        for(int i=0;i<n;i++) cin>>a[i];
        int number=0;
        int q=n;
        while(q!=0)
        {
            number++;
            int max=30000;
            for(int i=0;i<n;i++)
            {
                if(a[i]<max&&a[i]>0)
                {
                    q--;
                    max=a[i];
                    a[i]=-1;
                }
            }
        }
        cout<<number<<endl;
        delete []a;
    }
    return 0;
}
