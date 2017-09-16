#include <iostream>
#include <string>
using namespace std;
string s;
void f(int line,char c,int a)
{
	if (a!=s.length()-1)
	{
	    if (line ==1)
	    {
	    	if (c=='Z') cout<<"ZZZZZZZ";
	    	else if (c=='J') cout<<"JJJJJJJ";
	    	else if (c=='U') cout<<"U     U";
	    	else if (c=='T') cout<<"TTTTTTT";
	    }
    	else if (line ==2)
    	{
    		if (c=='Z') cout<<"     Z ";
    		else if (c=='J') cout<<"   J   ";
    		else if (c=='U') cout<<"U     U";
    		else if (c=='T') cout<<"   T   ";
    	}
    	else if (line ==3)
    	{
     		if (c=='Z') cout<<"    Z  ";
    		else if (c=='J') cout<<"   J   ";
    		else if (c=='U') cout<<"U     U";
    		else if (c=='T') cout<<"   T   ";
    	}
    	else if (line==4)
	    {
	    	if (c=='Z') cout<<"   Z   ";
	    	else if (c=='J') cout<<"   J   ";
	    	else if (c=='U') cout<<"U     U";
	    	else if (c=='T') cout<<"   T   ";
    	}
    	else if (line==5)
    	{
	    	if (c=='Z') cout<<"  Z    ";
	    	else if (c=='J') cout<<"   J   ";
	    	else if (c=='U') cout<<"U     U";
	    	else if (c=='T') cout<<"   T   ";
    	}
    	else if (line ==6)
	    {
	    	if (c=='Z') cout<<" Z     ";
	    	else if (c=='J') cout<<"   J   ";
	    	else if (c=='U') cout<<"U     U";
		    else if (c=='T') cout<<"   T   ";
	    }
    	else if (line==7)
    	{
	    	if (c=='Z') cout<<"ZZZZZZZ";
	    	else if (c=='J') cout<<" JJJ   ";
	    	else if (c=='U') cout<<" UUUUU ";
	    	else if (c=='T') cout<<"   T   ";
    	}
	}
	else
	{
	    if (line ==1)
	    {
	    	if (c=='Z') cout<<"ZZZZZZZ";
	    	else if (c=='J') cout<<"JJJJJJJ";
	    	else if (c=='U') cout<<"U     U";
	    	else if (c=='T') cout<<"TTTTTTT";
	    }
    	else if (line ==2)
    	{
    		if (c=='Z') cout<<"     Z";
    		else if (c=='J') cout<<"   J";
    		else if (c=='U') cout<<"U     U";
    		else if (c=='T') cout<<"   T";
    	}
    	else if (line ==3)
    	{
     		if (c=='Z') cout<<"    Z";
    		else if (c=='J') cout<<"   J";
    		else if (c=='U') cout<<"U     U";
    		else if (c=='T') cout<<"   T";
    	}
    	else if (line==4)
	    {
	    	if (c=='Z') cout<<"   Z";
	    	else if (c=='J') cout<<"   J";
	    	else if (c=='U') cout<<"U     U";
	    	else if (c=='T') cout<<"   T";
    	}
    	else if (line==5)
    	{
	    	if (c=='Z') cout<<"  Z";
	    	else if (c=='J') cout<<"   J";
	    	else if (c=='U') cout<<"U     U";
	    	else if (c=='T') cout<<"   T";
    	}
    	else if (line ==6)
	    {
	    	if (c=='Z') cout<<" Z";
	    	else if (c=='J') cout<<"   J";
	    	else if (c=='U') cout<<"U     U";
		    else if (c=='T') cout<<"   T";
	    }
    	else if (line==7)
    	{
	    	if (c=='Z') cout<<"ZZZZZZZ";
	    	else if (c=='J') cout<<" JJJ";
	    	else if (c=='U') cout<<" UUUUU";
	    	else if (c=='T') cout<<"   T";
    	}

	}
}
int main()
{
	int m=0;
	while (cin>>s)
	{
		for (int i=1;i<=7;i++)
		{
			for (int t=0;t<s.length();t++)
			{
				if (t!=0) cout<<"   ";
				f(i,s[t],t);
			}
			cout<<endl;
		}
	}
	return 0;
}
