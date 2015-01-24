#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
	int a[256];
	string s1,s2;
	while (getline(cin,s1))
	{
		getline(cin,s2);
		memset(a,0,sizeof(a));
		for (int i=0;i<s1.length();i++) a[s1[i]]++;
		for (int i=0;i<s2.length();i++) a[s2[i]]--;
		for (int i=0;i<256;i++) 
		{
			if (a[i]!=0) {cout<<"no\n";break;}
			if (i==255) cout<<"yes\n";
		}
		getline(cin,s1);
	}
	return 0;
}