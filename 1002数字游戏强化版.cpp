#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
struct game
{
	int x;
	int y;
};
int main()
{
	long long t;
	map<int,game> ma;
	map<int,game>::iterator it;
	for (int i=2;i<=10000;i++)
	{
		t=i;
		for (int k=2;;k++)
		{
			t=t*i;
			if (t<=100000000) {
			ma[t].x=i;
			ma[t].y=k;
			}
			else break;
		}
	}
	int n;
	while (scanf("%d",&n)==1)
	{
		if (n==0) return 0;
		if (n==1) 
		{
			printf("1 2\n");
			continue;
		}
		it=ma.find(n);
		if (it!=ma.end())
		{
			printf("%d %d\n",ma[n].x,ma[n].y);
		}
		else printf("0 0\n");
		
	}
}
/*#include<iostream>
#include<cmath>
#include<map>
using namespace std;

struct ans
{
	int a,b;
};

map<int,ans>ma;
map<int,ans>::iterator it;

void listmap()
{
	for(int n=2;n<10000;n++)
	{
		long long tmp=n*n;
		int j=2;
		while(tmp<1e8)
		{
			ma[tmp].a=n;
			ma[tmp].b=j;
			tmp*=n;
			j++;
		}
	}
}

int main()
{
	listmap();
	int n;
	while(scanf("%d",&n)!=EOF&&n)
	{
		if (n==0) printf("1 2\n");
		it=ma.find(n);
		if(it!=ma.end())
			printf("%d %d\n",ma[n].a,ma[n].b);
		else
			cout<<"0 0"<<endl;	
		
	}
    return 0;
}*/
