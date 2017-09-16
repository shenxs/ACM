#include<stdio.h>
int main()
{
	unsigned a,p,m,sum;
	while (scanf("%d%d%d",&a,&p,&m)==3)
	{
		sum=1;
		if (a==0&&p==0&&m==0) break;
		a=a%m;
		while (p!=0)
		{
			if (p%2==1) sum=sum*a%m;
			a=a*a%m;
			p=p/2;
		}
		printf("%d\n",sum);
	}
	return 0;
}
