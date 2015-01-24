#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int num=0;num<n;num++)
	{
		string a,b;
		int sum=0;
		int time;
		cin>>time;
		cin>>a>>b;
		for(int i=0;i<a.length();i++)
		{
			if (a[i]!=b[i]) 
			{
				sum+=a.length()-i;
				sum+=b.length()-i;
				break;
			}
		}
		sum*=time;
		cout<<sum<<endl;


	}
	return 0;
}