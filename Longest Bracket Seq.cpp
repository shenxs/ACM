#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin>>s)
	{
		int lon=0;
		int sum=1;
		for (int i=0;i<s.length();i++)
		{
			if (s[i]==')') continue;
			if (s[i]=='(') 
			{
				int tem=1;
				for (int t=i+1;t<s.length();t++)
				{
					if (s[t]==')') tem--;
					if (s[t]=='(') tem++;
					if (tem==0) 
					{
						if(t-i+1==lon)
						{
							sum++;
						}
						else if (t-i+1>lon)
						{
							lon=t-i+1;
							sum=1;
						}
					}
					if(tem==-1)
					{
						i=t;
						break;
					}
					
				}
			}
			
		}
		cout<<lon<<" "<<sum<<endl;
	}
	return 0;
}
