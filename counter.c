#include<stdio.h>
#include<string.h>
int main()
{
char a[50],count=0,i=0;
printf("\n enter the string:");
scanf("%s",a);
while(a[i]!='\0')
{
if(a[i]!='\t')
{
    i++;
count++;
}
}
printf("\n the number of characters are %d",count);
return 0;
}
