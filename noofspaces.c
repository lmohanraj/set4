#include <stdio.h>
int main()
{
	char str[100];
	int i,count=0;
	printf("enter the string");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]==' '||str[i]=='\t'||str[i]=='\n')
		count++;
		i++;
	}
	printf("NO OF SPACES=%d",count);
	return 0;
}
