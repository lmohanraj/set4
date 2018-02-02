#include <stdio.h>
int main()
{
	int n,a=1,b=1,i,t;
	printf("enter LIMIT");
	scanf("%d",&n);
 printf("\t%d\t%d",a,b);
	for(i=0;i<n-2;i++)
	{
t=a+b;
printf("\t%d",t);
a=b;
b=t;
	}

	return 0;
}
