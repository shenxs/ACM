#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int a[1000]={0};
	int i,k,t;
	while (cin>>s)
	{
		if (s=="0") break;
		int len=s.length();
		for(i=0;i<s.length();i++)
		{
			a[i]+=s[len-i-1]-48;
			if (a[i]>9) {a[i+1]+=1;a[i]-=10;}
		}
	}
	for(k=999;k>=0;k--) if (a[k]!=0) break;
	for(t=k;t>=0;t--) cout<<a[t];
	cout<<endl;
	return 0;
	

}