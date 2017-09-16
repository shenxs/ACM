#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	while(getline(cin,s1))
	{
		char t;
		int k=0;
		getline(cin,s2);
		for (int i=0;i<s2.length();i++)
		{
			t=(s2[i]-s1[k]+48);
			if (t<32) t+=92;
			cout<<t;
			k++;
			if (k==s1.length()) k=0;
		}
		cout<<endl;
	}
	return 0;
}
