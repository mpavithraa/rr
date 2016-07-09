# rr
#include<stdio.h>
int main()
{
char str[20];
int a;
printf("Enter any string->");
scanf("%s",str);
printf("The string is->%s",str);
for(a=0;a<=strlen(str);a++)
{
if(str[a]>=97&&str[a]<=122)
str[a]=str[a]-32;
}
printf("\nThe string in camelcase is->%s",str);
return 0;
}
