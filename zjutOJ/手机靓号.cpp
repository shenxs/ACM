#include <iostream>
#include<string>
using namespace std;
int main()
{
	int n=0;
	string s;
	while (cin>>s)
	{
		int f=true;
		int num=0;
		for (int i=0;i<s.length();i++)
		{
			if (s[i]=='4') 
			{
				f=false;
				break;
			}
			if (s[i]=='6'||s[i]=='8') 
			{
				num++;
			}
		}
		if (f==true&&num>=5) 
		{
			cout<<s<<endl;
		    n++;
		}
	}
	cout<<n<<endl;
	return 0;
}
