#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	for (string s;getline(cin,s);)
	{
		istringstream sin(s);
		char op;
		double a=0,b,c;
		for (sin>>b;sin>>op>>c;)
		{
			switch(op)
			{
				case'-':c=-c;
				case'+':a+=b;b=c;break;
				case'*':b*=c;break;
				case'/':
					{
						if (c==0)
						{
							cout<<"DivByZero\n";
							goto A;
						}
						else b/=c;
					}
			}	
		}
		cout<<scientific<<a+b<<'\n';
			A:;
	}
	return 0;
}
