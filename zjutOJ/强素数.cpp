#include<iostream>
using namespace std;
bool stat[65537] = {0,1};
int main()
{
	for(int i=2; i<256; i++)
	{
        if(stat[i]==0) for(int j=i*i; j<65536; j+=i)stat[j] = 1;
	}
    for(int n; cin>>n;)
    {
		bool f=true;
		while (n>9)
		{
			int a=0;
			if (stat[n]==0)
			{
				while (n!=0)
				{
					a+=n%10;
					n=n/10;
				}
				n=a;
			}
			else 
			{
				f=false;
				break;
			}
			if (f==false) break;
		}
		if (f==false||stat[n]==1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}
    return 0;
}