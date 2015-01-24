#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (cin>>s)
	{
		if (s=="Rock") cout<<"Paper"<<endl;
		if (s=="Paper") cout<<"Scissors"<<endl;
		if (s=="Scissors") cout<<"Rock"<<endl;
	}
	return 0;
}
