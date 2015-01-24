#include <iostream>
#include <stdio.h>
#include <queue>
#include <set>
using namespace std;
struct comp
{
	bool operator()(long long a,long long b)
	{
		return a>b;
	}
};

priority_queue<long long,vector<long long>,comp>q;

set<long long>s;
int a[1600];
int main()
{
	long long n=1,x;
	q.push(1);
	s.clear();
	while (n<=1500)
	{
		x=q.top();
		q.pop();
		if (s.find(x)!=s.end()) continue;
		a[n++]=x;
		s.insert(x);
		q.push(2*x);
		q.push(3*x);
		q.push(5*x);
//		cout<<n<<endl;
	}
	while (cin>>n&&n)
	{
		cout<<"The "<<n<<"th ugly number is "<<a[n]<<".\n";
	}
	return 0;
}