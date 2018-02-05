#include <stdio.h>
#include<string.h>
int main()
{
char a[50],count=0,i,len;
printf("enter the string:");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
while((a[i]=='\t')&&(a[i]!='\0'))
{
count++;
}
}
printf("the number of spaces are %d",count);
return 0;
}
