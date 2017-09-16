#include<stdio.h>
int main()
{
	int n,x,y,z;
	scanf("%d",&n);
	for (int num=1;num<=n;num++)
	{
		scanf("%d%d%d",&x,&y,&z);
		if (x+y==z) printf("%d+%d=%d\n",x,y,z);
		else if (x-y==z) printf ("%d-%d=%d\n",x,y,z);
		else if (x*y==z) printf ("%d*%d=%d\n",x,y,z);
		else if (x/y==z) printf ("%d/%d=%d\n",x,y,z);
		else if (y-x==z)printf("%d-%d=%d\n",y,x,z);
		else if (y/x==z)printf("%d/%d=%d\n",y,x,z);
		else printf("None\n");
	}
	return 0;
}
