#include<iostream>
#include<string>
using namespace std;
int f(string s)
{
	int x=1;
	int sum=0;
	int t=1;
	for (int i=s.length()-1;i>=0;i--)
	{
		
		sum+=(s[i]-48)*x;
		x*=10;
		t++;
		if (t==5) break;
//		cout<<sum<<endl;
	}
	return sum;
}
int main()
{
	int a,b;
	string n,m;
	while(cin>>n>>m)
	{
		if (n=="0"&&m=="0") break;
		a=f(n);
		b=f(m);
//		cout<<a<<" "<<b<<endl;
        int k=a*b-1;
//      cout<<k<<endl;
        if (k==-1) cout<<9999<<endl;
        
		else cout<<k%10000<<endl;
	}
	return 0;
}
