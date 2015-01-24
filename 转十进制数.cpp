#include<iostream>
#include<string>
using namespace std;
int main()
{
    unsigned long long t;
 //   long long t;
	string s;
	while (cin>>s)
	{
		t=0;
		if (s=="-1") break;
		for (int i=0;i<64;i++)
		{
			t=t*2+s[i]-48;
		}
		cout<<t<<endl;
	}
	return 0;
}
