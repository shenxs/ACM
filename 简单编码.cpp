//¼òµ¥±àÂë
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
    while (getline(cin,s)&&s!="END")
	{
		for (int i=0;i<s.length();i++)
		{
			switch(s[i])
			{
			case 'A':
			case 'F':
			case 'W': s[i]='I';break;
			case 'C': s[i]='L';break;
			case 'M': s[i]='o';break;
			case 'S': s[i]='v';break;
			case 'D':
			case 'P':
			case 'G':
			case 'B': s[i]='e';break;
			case 'L': s[i]='Y';break;
			case 'X': s[i]='u';break;

			}
		}
		cout<<s<<endl;
	}
	return 0;
	
}