#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char string[100];
    int i=0,word=1;
       printf("Input the string : ");
       gets(string);	
    while(string[i]!='\0')
    {
        if(string[i]==' ' || string[i]=='\n' || string[i]=='\t')
        {
            word++;
        }
        i++;
    }
    printf("Total number of words in the string is : %d\n", word);
}
