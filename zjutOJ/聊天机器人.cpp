#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int n=1;
	int time=1;
	while (getline(cin,s))
	{
		cout<<"LC:";
		if (s=="Bye.") 
		{
			cout<<"See you."<<endl;
			return 0;
		}
		if(s=="Hello.")cout<<"Hello."<<endl;
		else if(s=="How are you?") cout<<"I'm fine."<<endl;
		else if(s=="How old are you?")cout<<"I'm "<<n<<"'s old."<<endl;
		else if(s=="What's your name?")
		{
				if (time==1) 
				{
					cout<<"My name is LittleCpp."<<endl;
					time++;
				}
				else if (time==2)
				{
					cout<<"I think I had told you yet."<<endl;
					time++;
				}
				else 
				{
					cout<<"Oh, you have a poor memory."<<endl;
				}
		}
		else cout<<"Sorry, my father haven't taught me how to answer this question."<<endl;
		n++;
	}
	return 0;
} 
