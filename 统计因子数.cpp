#include <iostream>
using namespace std;

int a[9];
void f(int n)
{
	int ans=0;
	if (n%2==0) ans++;
	if (n%3==0) ans++;
	if (n%5==0) ans++;
	if (n%7==0) ans++;
	if (n%11==0) ans++;
	if (n%13==0) ans++;
	if (n%17==0) ans++;
	if (n%19==0) ans++;
	a[ans]++;
	return ;
}
int main()
{
	int n,ans=0;
	memset(a,0,sizeof(a));
	while (cin>>n)
	{
		if (n==0) break;
		ans++;
		f(n);
	}
	cout<<ans<<endl;
	for (int i=8;i>=0;i--)
	{
		cout<<i<<":"<<a[i]<<endl;
	}
	return 0;
}