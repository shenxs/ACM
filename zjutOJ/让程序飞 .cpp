#include<iostream>
using namespace std;
bool stat[65537] = {0,1};
int main()
{

	for(int i=2; i<256; i++)
	{
        if(stat[i]==0) 
		    for(int j=i*i; j<65536; j+=i)stat[j] = 1;
	}
    for(int n; cin>>n;)
    {
		if (stat[n]==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
    return 0;
}