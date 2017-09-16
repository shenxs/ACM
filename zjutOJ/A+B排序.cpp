#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int s[5000];
	int a,b;
	int i=0;
	while (cin>>a>>b)
	{
		s[i]=a+b;
		i++;
	}
	sort(s,s+i);
	for (int t=0;t<i;t++) cout<<s[t]<<endl;
	return 0;
}
