#include<stdio.h>
int main()
{
char a[20],i,flag=0;
printf("enter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]=='1')||(a[i]=='0'))
{
flag=1;
}
}
if(flag==1)
{
printf("\nyes binary");
}
else
{
printf("\nno");
}
return 0;
}
