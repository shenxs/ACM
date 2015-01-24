#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin>>s)
	{
		int sum1=0,sum2=0;
		for (int i=0;i<s.length();i++)
		{
			if (s[i]=='a')sum1++;
			else sum2++;
		}
		cout<<sum1<<" "<<sum2<<endl;

	}
	return 0;

}