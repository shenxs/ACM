#include <iostream>
#include <stdio.h>
using namespace std;
int a[21][21][21];
int f(int x,int y,int z)
{
	if (x<=0||y<=0||z<=0) return 1;
	if (x>20||y>20||z>20) return f(20,20,20);
	if (a[x][y][z]!=0) return a[x][y][z];
	if (x<y&&y<z)
	{
		return a[x][y][z]=f(x,y,z-1)+f(x,y-1,z-1)-f(x,y-1,z);
	}
	else return a[x][y][z]=f(x-1,y,z)+f(x-1,y-1,z)+f(x-1,y,z-1)-f(x-1,y-1,z-1);
}
int main()
{
	int x,y,z;
	memset(a,0,sizeof(a));
	while (cin>>x>>y>>z)
	{
		if (x==-1&&y==-1&&z==-1) break;
		printf("w(%d, %d, %d) = %d\n",x,y,z,f(x,y,z));
	}
	return 0;
}