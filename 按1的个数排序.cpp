#include<iostream>
#include<string>
using namespace std;
int num(string s)
{
	int number=0;
	for (int i=0;i<s.length();i++)
	{
		if (s[i]=='1') number++;
	}
	return number;
}
int main()
{
	string s[1000],tem2;
	int a[1000],tem1;
	int i=1;
	while (getline(cin,s[i]))
	{
		a[i]=num(s[i]);
		i++;
	}
	for (int k=1;k<i;k++)
	{
		int n=k;
		for (int b=k+1;b<i;b++)
		{
			if (a[b]<a[n]||(a[n]==a[b]&&s[b]<s[n])) n=b;
		}
		tem2=s[k];
		s[k]=s[n];
		s[n]=tem2;
		tem1=a[k];
		a[k]=a[n];
		a[n]=tem1;
	}
	for (int k=1;k<i;k++)
	{
		cout<<s[k]<<endl;
	}
	return 0;
}
