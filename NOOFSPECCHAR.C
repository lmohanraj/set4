#include <stdio.h>
int main()
{
	char str[100];
	int i,count=0;
	printf("enter the string\n");
	gets(str);
	while(str[i]!='\0')
	{
		if((str[i]>='0'&&str[i]<='9')||(str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			//
		}
		else
		count++;
		i++;
	}
	printf("NO OF SPECIAL CHARACTERS=%d",count);
	return 0;
}
