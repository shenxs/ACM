#include<stdio.h>
int main()
{
	int n,m,tem;
	while (scanf("%d%d",&m,&n)==2)
	{
		int a=m;
		int b=n;
		if (n>m)
		{
			tem=n;
			n=m;
			m=tem;
		}
		while (n!=0)
		{
			tem=m%n;
			m=n;
			n=tem;
		}
	    printf("%d\n",a/m*b);
	}
	return 0;
}
