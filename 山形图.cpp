#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int n;
	char c;
	for(;cin>>c>>n;)
	{
		int b=1;
		for(;n>=1;n--)
		{
			cout<<string(n-1,' ')<<string(2*b-1,c)<<endl;
			b++;
		}
	}
	return 0;
}
