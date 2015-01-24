#include<iostream>
using namespace std;

char s[200][200];
void youtian(int line,int row)
{
	int i,j;
	s[line][row]='*';
	for (i=line-1;i<=line+1;i++)
	{
		for (j=row-1;j<=row+1;j++)
			if (s[i][j]=='@') youtian(i,j);
	}
	
}
int main()
{
	for (int a,b;cin>>a>>b&&(a!=0||b!=0);)
	{
		int line,row,num=0;
		for (line=1;line<=a;line++)
			for (row=1;row<=b;row++)
				cin>>s[line][row];
		for (int i=1;i<=a;i++)
		{
			for (int j=1;j<=b;j++)
				if (s[i][j]=='@')
				{
					youtian(i,j);
					num++;
				}
		}
		cout<<num<<endl;
			
	}
	return 0;
}