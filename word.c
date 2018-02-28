#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int count=0,i,len;
printf("enter the string:");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
if((a[i]=='32')||(a[i]=='\0'))
{
count++;
}
}
printf("\n the number of words are %d",count);
return 0;
}
