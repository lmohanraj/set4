#include <stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	printf("before swapping : %d %d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping : %d %d",a,b);

}
