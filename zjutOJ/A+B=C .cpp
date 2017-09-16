#include<iostream>
using namespace std;
int main()
{
	for (long c;cin>>c;)
	{
		if (c>=0)
		{
			if (c%2==0)cout<<c/2<<" "<<c/2<<endl;
			else cout<<c/2<<" "<<c/2+1<<endl;
		}
        else
		{
			if (c%2==0)cout<<c/2<<" "<<c/2<<endl;
			else cout<<c/2-1<<" "<<c/2<<endl;
		}
	}

	return 0;
}
