#include<stdio.h>
#include<string.h>
int main()
{
char a[50],count=0,len,i;
printf("\n enter the string:");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
 
while((a[i]!='\0')&&(a[i]!='\t'))
{
 
count++;
}
}
printf("\n the number of characters are %d",count);
return 0;
}
