#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n&&n>0&&n<=200)
    {

        for(int i=31;i>=0;i--)
        {
           cout<<(n&(1<<i));
        }
        cout<<endl;
    }
    return 0;
}
