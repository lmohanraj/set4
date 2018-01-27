#include<stdio.h>
int main() 
{ 
char para[1000]; 
int charac, lines; 
printf("Enter your a paragraph\n: "); 
gets(para); 
charac = strlen(para);
lines = 0;
for (int i=0; i<charac; i++)
{
if (para[i]=='.')
{
lines++;
}
}
printf("\n\nTotal lines: %d",lines); 
getch();
return 0; 
} 
