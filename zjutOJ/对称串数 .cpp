#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for (int k=0;k<n;k++)
	{
	string s;
	cin>>s;
	{
		int sum=0;
		int k,i;
		for (i=1;i<s.length()-1;i++)
		{
			k=1;
			while(s[i+k]==s[i-k])
			{
				sum++;
				k++;
				if (i+k==s.length()||i-k<0) break;
			}
		}
		for (i=0;i<s.length()-1;i++)
		{
			k=0;
			while (s[i-k]==s[i+1+k])
			{
				sum++;
				k++;
				if (i+k+1==s.length()||i-k<0) break;
			}
		}
		cout<<sum<<endl;
	}



	}
	return 0;
}