#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a=0,b=0;
	string s;
	while (cin>>s)
	{
		if (s=="Yes") a+=1;
		if (s=="No") b+=1;
	}
	if (a>b) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

}