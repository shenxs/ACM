#include<iostream>
using namespace std;
int main()
{
	int n,i,m=0;
	while (cin>>n)
	{
		if (m>0) cout<<endl;
		m++;
		for (int line=0;line<n;line++)
		{
			cout<<'a';
			for (i=0;i<n-line-1;i++) cout<<" ";
			for (i=0;i<=line;i++) cout<<char(i+97);
			cout<<endl;
		}
	}
	return 0;
}