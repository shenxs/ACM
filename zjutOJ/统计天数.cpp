#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,t;
	int n;
	int i=0;
	for (;cin>>s,cin>>n,cin>>t;)
	{
		
		if (n==25) 
		{
			i++;
			if (t.length()==5) i++;
		}

	}
		cout<<i<<endl;
	return 0;
}