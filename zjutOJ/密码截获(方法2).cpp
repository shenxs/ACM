#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin>>s)
	{
		int i,tem=0;
		for (i=0;i<s.length();i++)
		{
			int k=0;
			while (s[i-k]==s[i+k]) 
			{k=k+1;if (k>i||i+k>s.length()-1) break;}
			if (2*k-1>tem) tem=2*k-1;
		}
		for (i=0;i<s.length();i++)
		{
			int k=0;
			while (s[i-k]==s[i+1+k]) 
			{k=k+1;if (k>i||i+1+k>s.length()-1) break;}
			if (2*k>tem) tem=2*k;			
		}
		cout<<tem<<endl;
	}
    return 0;
}