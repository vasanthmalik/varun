#include<stdio.h>
#include<string.h>
int main()
{
int count,numeric,i;
char str[20];
printf("enter the string \n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>=48)&&(str[i]<=57))
{
count++;
}
}
printf("\n the numeric characters are %d",count);
return 0;
}
