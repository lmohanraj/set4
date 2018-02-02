#include <stdio.h>
int main()
{
	char str[100];
	int i,count=0;
	printf("enter the string\n");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]!=' '&&str[i]!='\t'&&str[i]!='\n')
		count++;
		i++;
	}
	printf("NO OF CHARACTERS=%d",count);
	return 0;
}
