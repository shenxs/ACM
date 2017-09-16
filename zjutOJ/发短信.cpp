#include <iostream>
#include<string>
using namespace std;
int main()
{
	double sum=0;
	string s;
	while (getline(cin,s))
	{
		double time=0;
		for (int i=0;i<s.length();i++)
		{
			switch(s[i])
			{   
			    case'a':
				case'A':time+=0.5;break;
			    case'b':
				case'B':time+=1;break;
			    case'c':
				case'C':time+=1.5;break;
			    case'd':
				case'D':time+=0.5;break;
			    case'e':
				case'E':time+=1;break;
			    case'f':
				case'F':time+=1.5;break;
			    case'g':
				case'G':time+=0.5;break;
			    case'h':
				case'H':time+=1;break;
			    case'i':
				case'I':time+=1.5;break;
			    case'j':
				case'J':time+=0.5;break;
			    case'k':
				case'K':time+=1;break;
			    case'l':
				case'L':time+=1.5;break;
			    case'm':
				case'M':time+=0.5;break;
			    case'n':
				case'N':time+=1;break;
			    case'o':
				case'O':time+=1.5;break;
			    case'p':
				case'P':time+=0.5;break;
			    case'q':
				case'Q':time+=1;break;
			    case'r':
				case'R':time+=1.5;break;
			    case's':
				case'S':time+=2;break;
			    case't':
				case'T':time+=0.5;break;
			    case'u':
				case'U':time+=1;break;
			    case'v':
				case'V':time+=1.5;break;
			    case'w':
				case'W':time+=0.5;break;
			    case'x':
				case'X':time+=1;break;
			    case'y':
				case'Y':time+=1.5;break;
			    case'z':
				case'Z':time+=2;break;
				case' ':time+=0.5;break;
				default:time+=1;
			}
		}
		time+=1;
		sum+=time;
		cout<<time<<endl;
	}
	cout<<sum<<endl;
	return 0;
}
